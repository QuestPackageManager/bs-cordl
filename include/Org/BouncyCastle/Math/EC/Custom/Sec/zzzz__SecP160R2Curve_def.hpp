#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP160R2Curve)
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Point;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecP160R2Curve__SecP160R2LookupTable;
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
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecP160R2Curve__SecP160R2LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable);
// Type: ::SecP160R2LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1363))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1395))
// CS Name: ::SecP160R2Curve::SecP160R2LookupTable*
class CORDL_TYPE __SecP160R2Curve__SecP160R2LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer))::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_table, put = __cordl_internal_set_m_table))::ArrayW<uint32_t, ::Array<uint32_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_size, put = __cordl_internal_set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*& __cordl_internal_get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*> const& __cordl_internal_get_m_outer() const;

  constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_table();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_table() const;

  constexpr void __cordl_internal_set_m_table(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr int32_t& __cordl_internal_get_m_size();

  constexpr int32_t const& __cordl_internal_get_m_size() const;

  constexpr void __cordl_internal_set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* outer,
                                                                                                             ::ArrayW<uint32_t, ::Array<uint32_t>*> table, int32_t size);

  /// @brief Method .ctor, addr 0x100c350, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* outer, ::ArrayW<uint32_t, ::Array<uint32_t>*> table, int32_t size);

  /// @brief Method get_Size, addr 0x100c774, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Method Lookup, addr 0x100c77c, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x100c964, size 0xc8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint, addr 0x100c884, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__SecP160R2Curve__SecP160R2LookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecP160R2Curve__SecP160R2LookupTable(__SecP160R2Curve__SecP160R2LookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecP160R2Curve__SecP160R2LookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecP160R2Curve__SecP160R2LookupTable(__SecP160R2Curve__SecP160R2LookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecP160R2Curve__SecP160R2LookupTable();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable, ___m_size) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Curve
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1364))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1396))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Curve*
class CORDL_TYPE SecP160R2Curve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
  // Declarations
  using SecP160R2LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable;

  /// @brief Field m_infinity, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_infinity, put = __cordl_internal_set_m_infinity))::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* m_infinity;

  /// @brief Field q, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_q, put = setStaticF_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field SECP160R2_AFFINE_ZS, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_SECP160R2_AFFINE_ZS,
               put = setStaticF_SECP160R2_AFFINE_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> SECP160R2_AFFINE_ZS;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*& __cordl_internal_get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*> const& __cordl_internal_get_m_infinity() const;

  constexpr void __cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* value);

  static inline void setStaticF_q(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_q();

  static inline void setStaticF_SECP160R2_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECP160R2_AFFINE_ZS();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* New_ctor();

  /// @brief Method .ctor, addr 0x100bb2c, size 0x220, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CloneCurve, addr 0x100bd54, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem, addr 0x100bdac, size 0xc, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method get_Q, addr 0x100bdb8, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_Infinity, addr 0x100be10, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize, addr 0x100be18, size 0x64, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger, addr 0x100be7c, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint, addr 0x100bff4, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x100c108, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method CreateCacheSafeLookupTable, addr 0x100c1a8, size 0x1a8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method RandomFieldElement, addr 0x100c38c, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult, addr 0x100c530, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  // Ctor Parameters [CppParam { name: "", ty: "SecP160R2Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP160R2Curve(SecP160R2Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP160R2Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP160R2Curve(SecP160R2Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP160R2Curve();

public:
  /// @brief Field m_infinity, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* ___m_infinity;

  /// @brief Field SECP160R2_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t SECP160R2_DEFAULT_COORDS{ static_cast<int32_t>(0x2) };

  /// @brief Field SECP160R2_FE_INTS offset 0xffffffff size 0x4
  static constexpr int32_t SECP160R2_FE_INTS{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve, ___m_infinity) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Curve/SecP160R2LookupTable");
