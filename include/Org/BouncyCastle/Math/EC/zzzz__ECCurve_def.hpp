#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECCurve)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
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
class __ECCurve__Config;
}
namespace Org::BouncyCastle::Math::EC {
class __ECCurve__DefaultLookupTable;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class __ECCurve__Config;
}
namespace Org::BouncyCastle::Math::EC {
class __ECCurve__DefaultLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECCurve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::__ECCurve__Config);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable);
// Type: ::Config
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::ECCurve::Config*
class CORDL_TYPE __ECCurve__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field coord, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_coord, put = __cordl_internal_set_coord)) int32_t coord;

  /// @brief Field endomorphism, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_endomorphism, put = __cordl_internal_set_endomorphism))::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism;

  /// @brief Field multiplier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier))::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer))::Org::BouncyCastle::Math::EC::ECCurve* outer;

  /// @brief Method Create, addr 0x103c644, size 0xdc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* Create();

  static inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord,
                                                                           ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                           ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  /// @brief Method SetCoordinateSystem, addr 0x103c62c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetCoordinateSystem(int32_t coord);

  /// @brief Method SetEndomorphism, addr 0x103c634, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetEndomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);

  /// @brief Method SetMultiplier, addr 0x103c63c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetMultiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  constexpr int32_t const& __cordl_internal_get_coord() const;

  constexpr int32_t& __cordl_internal_get_coord();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __cordl_internal_get_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __cordl_internal_get_multiplier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*> const& __cordl_internal_get_multiplier() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_outer() const;

  constexpr void __cordl_internal_set_coord(int32_t value);

  constexpr void __cordl_internal_set_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  /// @brief Method .ctor, addr 0x103ac58, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                    ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ECCurve__Config();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ECCurve__Config(__ECCurve__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ECCurve__Config(__ECCurve__Config const&) = delete;

  /// @brief Field outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___outer;

  /// @brief Field coord, offset: 0x18, size: 0x4, def value: None
  int32_t ___coord;

  /// @brief Field endomorphism, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* ___endomorphism;

  /// @brief Field multiplier, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* ___multiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::__ECCurve__Config, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__Config, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__Config, ___coord) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__Config, ___endomorphism) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__Config, ___multiplier) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Type: ::DefaultLookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::ECCurve::DefaultLookupTable*
class CORDL_TYPE __ECCurve__DefaultLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer))::Org::BouncyCastle::Math::EC::ECCurve* m_outer;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_size, put = __cordl_internal_set_m_size)) int32_t m_size;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_table, put = __cordl_internal_set_m_table))::ArrayW<uint8_t, ::Array<uint8_t>*> m_table;

  /// @brief Method CreatePoint, addr 0x103c8b0, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Lookup, addr 0x103c730, size 0x180, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x103c9b0, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  static inline ::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_m_outer() const;

  constexpr int32_t const& __cordl_internal_get_m_size() const;

  constexpr int32_t& __cordl_internal_get_m_size();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_table() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_table();

  constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_m_size(int32_t value);

  constexpr void __cordl_internal_set_m_table(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x103baf8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  /// @brief Method get_Size, addr 0x103c728, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ECCurve__DefaultLookupTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__DefaultLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ECCurve__DefaultLookupTable(__ECCurve__DefaultLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__DefaultLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ECCurve__DefaultLookupTable(__ECCurve__DefaultLookupTable const&) = delete;

  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable, ___m_size) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::ECCurve
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::ECCurve*
class CORDL_TYPE ECCurve : public ::System::Object {
public:
  // Declarations
  using Config = ::Org::BouncyCastle::Math::EC::__ECCurve__Config;

  using DefaultLookupTable = ::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::EC::ECFieldElement* A;

  __declspec(property(get = get_B))::Org::BouncyCastle::Math::EC::ECFieldElement* B;

  __declspec(property(get = get_Cofactor))::Org::BouncyCastle::Math::BigInteger* Cofactor;

  __declspec(property(get = get_CoordinateSystem)) int32_t CoordinateSystem;

  __declspec(property(get = get_Field))::Org::BouncyCastle::Math::Field::IFiniteField* Field;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_Order))::Org::BouncyCastle::Math::BigInteger* Order;

  /// @brief Field m_a, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_a, put = __cordl_internal_set_m_a))::Org::BouncyCastle::Math::EC::ECFieldElement* m_a;

  /// @brief Field m_b, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_b, put = __cordl_internal_set_m_b))::Org::BouncyCastle::Math::EC::ECFieldElement* m_b;

  /// @brief Field m_cofactor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cofactor, put = __cordl_internal_set_m_cofactor))::Org::BouncyCastle::Math::BigInteger* m_cofactor;

  /// @brief Field m_coord, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_coord, put = __cordl_internal_set_m_coord)) int32_t m_coord;

  /// @brief Field m_endomorphism, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_endomorphism, put = __cordl_internal_set_m_endomorphism))::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;

  /// @brief Field m_field, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_field, put = __cordl_internal_set_m_field))::Org::BouncyCastle::Math::Field::IFiniteField* m_field;

  /// @brief Field m_multiplier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_multiplier, put = __cordl_internal_set_m_multiplier))::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier;

  /// @brief Field m_order, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_order, put = __cordl_internal_set_m_order))::Org::BouncyCastle::Math::BigInteger* m_order;

  /// @brief Method CheckPoint, addr 0x103bb34, size 0x98, virtual true, abstract: false, final false
  inline void CheckPoint(::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method CheckPoints, addr 0x103bbcc, size 0x28, virtual true, abstract: false, final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method CheckPoints, addr 0x103bbf4, size 0x16c, virtual true, abstract: false, final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len);

  /// @brief Method CloneCurve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method Configure, addr 0x103abdc, size 0x7c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* Configure();

  /// @brief Method CreateCacheSafeLookupTable, addr 0x103b8e4, size 0x214, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method CreateDefaultMultiplier, addr 0x103ae34, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();

  /// @brief Method CreatePoint, addr 0x103adb8, size 0x14, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method CreatePoint, addr 0x103adcc, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method DecodePoint, addr 0x103c0cc, size 0x420, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecodePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method DecompressPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);

  /// @brief Method Equals, addr 0x103beb0, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x103bd60, size 0x150, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECCurve* other);

  /// @brief Method FromBigInteger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetAllCoordinateSystems, addr 0x103ab3c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetAllCoordinateSystems();

  /// @brief Method GetEndomorphism, addr 0x103c008, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* GetEndomorphism();

  /// @brief Method GetHashCode, addr 0x103bf3c, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMultiplier, addr 0x103c010, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* GetMultiplier();

  /// @brief Method GetPreCompInfo, addr 0x103af00, size 0x218, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* GetPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name);

  /// @brief Method ImportPoint, addr 0x103b488, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method IsValidFieldElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::ECCurve* New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method NormalizeAll, addr 0x103b598, size 0x2c, virtual true, abstract: false, final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method NormalizeAll, addr 0x103b5c4, size 0x2f0, virtual true, abstract: false, final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len,
                           ::Org::BouncyCastle::Math::EC::ECFieldElement* iso);

  /// @brief Method Precompute, addr 0x103b118, size 0x370, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name,
                                                                            ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback);

  /// @brief Method RandomFieldElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method SupportsCoordinateSystem, addr 0x103aef4, size 0xc, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method ValidatePoint, addr 0x103ac9c, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method ValidatePoint, addr 0x103ad2c, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __cordl_internal_get_m_a() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_b();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __cordl_internal_get_m_b() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_cofactor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_m_cofactor() const;

  constexpr int32_t const& __cordl_internal_get_m_coord() const;

  constexpr int32_t& __cordl_internal_get_m_coord();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_m_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __cordl_internal_get_m_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& __cordl_internal_get_m_field();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::Field::IFiniteField*> const& __cordl_internal_get_m_field() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __cordl_internal_get_m_multiplier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*> const& __cordl_internal_get_m_multiplier() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_order();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_m_order() const;

  constexpr void __cordl_internal_set_m_a(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_b(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_cofactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_m_coord(int32_t value);

  constexpr void __cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_m_field(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  constexpr void __cordl_internal_set_m_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  constexpr void __cordl_internal_set_m_order(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x103abac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method get_A, addr 0x103b8bc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_A();

  /// @brief Method get_B, addr 0x103b8c4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_B();

  /// @brief Method get_Cofactor, addr 0x103b8d4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Cofactor();

  /// @brief Method get_CoordinateSystem, addr 0x103b8dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CoordinateSystem();

  /// @brief Method get_Field, addr 0x103b8b4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Field();

  /// @brief Method get_FieldSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Infinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_Order, addr 0x103b8cc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECCurve(ECCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECCurve(ECCurve const&) = delete;

  /// @brief Field m_field, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::Field::IFiniteField* ___m_field;

  /// @brief Field m_a, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___m_a;

  /// @brief Field m_b, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___m_b;

  /// @brief Field m_order, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_order;

  /// @brief Field m_cofactor, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_cofactor;

  /// @brief Field m_coord, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_coord;

  /// @brief Field m_endomorphism, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* ___m_endomorphism;

  /// @brief Field m_multiplier, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* ___m_multiplier;

  /// @brief Field COORD_AFFINE offset 0xffffffff size 0x4
  static constexpr int32_t COORD_AFFINE{ static_cast<int32_t>(0x0) };

  /// @brief Field COORD_HOMOGENEOUS offset 0xffffffff size 0x4
  static constexpr int32_t COORD_HOMOGENEOUS{ static_cast<int32_t>(0x1) };

  /// @brief Field COORD_JACOBIAN offset 0xffffffff size 0x4
  static constexpr int32_t COORD_JACOBIAN{ static_cast<int32_t>(0x2) };

  /// @brief Field COORD_JACOBIAN_CHUDNOVSKY offset 0xffffffff size 0x4
  static constexpr int32_t COORD_JACOBIAN_CHUDNOVSKY{ static_cast<int32_t>(0x3) };

  /// @brief Field COORD_JACOBIAN_MODIFIED offset 0xffffffff size 0x4
  static constexpr int32_t COORD_JACOBIAN_MODIFIED{ static_cast<int32_t>(0x4) };

  /// @brief Field COORD_LAMBDA_AFFINE offset 0xffffffff size 0x4
  static constexpr int32_t COORD_LAMBDA_AFFINE{ static_cast<int32_t>(0x5) };

  /// @brief Field COORD_LAMBDA_PROJECTIVE offset 0xffffffff size 0x4
  static constexpr int32_t COORD_LAMBDA_PROJECTIVE{ static_cast<int32_t>(0x6) };

  /// @brief Field COORD_SKEWED offset 0xffffffff size 0x4
  static constexpr int32_t COORD_SKEWED{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECCurve, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_field) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_a) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_b) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_order) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_cofactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_coord) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_endomorphism) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_multiplier) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve*, "Org.BouncyCastle.Math.EC", "ECCurve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__ECCurve__Config);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__ECCurve__Config*, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable*, "Org.BouncyCastle.Math.EC", "ECCurve/DefaultLookupTable");
