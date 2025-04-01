#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class ECCurve_Config;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve_DefaultLookupTable;
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
class ECCurve_Config;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve_DefaultLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECCurve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECCurve_Config);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECCurve/Config
class CORDL_TYPE ECCurve_Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field coord, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_coord, put = __cordl_internal_set_coord)) int32_t coord;

  /// @brief Field endomorphism, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_endomorphism, put = __cordl_internal_set_endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism;

  /// @brief Field multiplier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier;

  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_outer, put = __cordl_internal_set_outer)) ::Org::BouncyCastle::Math::EC::ECCurve* outer;

  /// @brief Method Create, addr 0x244c490, size 0xd4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* Create();

  static inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                        ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  /// @brief Method SetCoordinateSystem, addr 0x244c478, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* SetCoordinateSystem(int32_t coord);

  /// @brief Method SetEndomorphism, addr 0x244c480, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* SetEndomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);

  /// @brief Method SetMultiplier, addr 0x244c488, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* SetMultiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  constexpr int32_t const& __cordl_internal_get_coord() const;

  constexpr int32_t& __cordl_internal_get_coord();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& __cordl_internal_get_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_endomorphism();

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* const& __cordl_internal_get_multiplier() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __cordl_internal_get_multiplier();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_outer() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_outer();

  constexpr void __cordl_internal_set_coord(int32_t value);

  constexpr void __cordl_internal_set_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  constexpr void __cordl_internal_set_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  /// @brief Method .ctor, addr 0x244aafc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                    ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECCurve_Config();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECCurve_Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECCurve_Config(ECCurve_Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECCurve_Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECCurve_Config(ECCurve_Config const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1359 };

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
static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_Config, ___outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_Config, ___coord) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_Config, ___endomorphism) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_Config, ___multiplier) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECCurve_Config, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Dependencies Org.BouncyCastle.Math.EC.AbstractECLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECCurve/DefaultLookupTable
class CORDL_TYPE ECCurve_DefaultLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer)) ::Org::BouncyCastle::Math::EC::ECCurve* m_outer;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_size, put = __cordl_internal_set_m_size)) int32_t m_size;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_table, put = __cordl_internal_set_m_table)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_table;

  /// @brief Method CreatePoint, addr 0x244c6f8, size 0xf8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Lookup, addr 0x244c574, size 0x184, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar, addr 0x244c7f0, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  static inline ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_m_outer() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_m_outer();

  constexpr int32_t const& __cordl_internal_get_m_size() const;

  constexpr int32_t& __cordl_internal_get_m_size();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_table() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_table();

  constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_m_size(int32_t value);

  constexpr void __cordl_internal_set_m_table(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x244b97c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  /// @brief Method get_Size, addr 0x244c56c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECCurve_DefaultLookupTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECCurve_DefaultLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECCurve_DefaultLookupTable(ECCurve_DefaultLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECCurve_DefaultLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECCurve_DefaultLookupTable(ECCurve_DefaultLookupTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1360 };

  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable, ___m_size) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECCurve
class CORDL_TYPE ECCurve : public ::System::Object {
public:
  // Declarations
  using Config = ::Org::BouncyCastle::Math::EC::ECCurve_Config;

  using DefaultLookupTable = ::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable;

  __declspec(property(get = get_A)) ::Org::BouncyCastle::Math::EC::ECFieldElement* A;

  __declspec(property(get = get_B)) ::Org::BouncyCastle::Math::EC::ECFieldElement* B;

  __declspec(property(get = get_Cofactor)) ::Org::BouncyCastle::Math::BigInteger* Cofactor;

  __declspec(property(get = get_CoordinateSystem)) int32_t CoordinateSystem;

  __declspec(property(get = get_Field)) ::Org::BouncyCastle::Math::Field::IFiniteField* Field;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_Order)) ::Org::BouncyCastle::Math::BigInteger* Order;

  /// @brief Field m_a, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_a, put = __cordl_internal_set_m_a)) ::Org::BouncyCastle::Math::EC::ECFieldElement* m_a;

  /// @brief Field m_b, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_b, put = __cordl_internal_set_m_b)) ::Org::BouncyCastle::Math::EC::ECFieldElement* m_b;

  /// @brief Field m_cofactor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cofactor, put = __cordl_internal_set_m_cofactor)) ::Org::BouncyCastle::Math::BigInteger* m_cofactor;

  /// @brief Field m_coord, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_coord, put = __cordl_internal_set_m_coord)) int32_t m_coord;

  /// @brief Field m_endomorphism, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_endomorphism, put = __cordl_internal_set_m_endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;

  /// @brief Field m_field, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_field, put = __cordl_internal_set_m_field)) ::Org::BouncyCastle::Math::Field::IFiniteField* m_field;

  /// @brief Field m_multiplier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_multiplier, put = __cordl_internal_set_m_multiplier)) ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier;

  /// @brief Field m_order, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_order, put = __cordl_internal_set_m_order)) ::Org::BouncyCastle::Math::BigInteger* m_order;

  /// @brief Method CheckPoint, addr 0x244b9b8, size 0x94, virtual true, abstract: false, final false
  inline void CheckPoint(::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method CheckPoints, addr 0x244ba4c, size 0x28, virtual true, abstract: false, final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method CheckPoints, addr 0x244ba74, size 0x160, virtual true, abstract: false, final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len);

  /// @brief Method CloneCurve, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method Configure, addr 0x244aa80, size 0x7c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve_Config* Configure();

  /// @brief Method CreateCacheSafeLookupTable, addr 0x244b770, size 0x20c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method CreateDefaultMultiplier, addr 0x244acd0, size 0xb4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();

  /// @brief Method CreatePoint, addr 0x244ac54, size 0x14, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method CreatePoint, addr 0x244ac68, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method DecodePoint, addr 0x244bf40, size 0x3fc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecodePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method DecompressPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);

  /// @brief Method Equals, addr 0x244bd24, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x244bbd4, size 0x150, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECCurve* other);

  /// @brief Method FromBigInteger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetAllCoordinateSystems, addr 0x244a9e0, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetAllCoordinateSystems();

  /// @brief Method GetEndomorphism, addr 0x244be7c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* GetEndomorphism();

  /// @brief Method GetHashCode, addr 0x244bdb0, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMultiplier, addr 0x244be84, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* GetMultiplier();

  /// @brief Method GetPreCompInfo, addr 0x244ad90, size 0x218, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* GetPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name);

  /// @brief Method ImportPoint, addr 0x244b318, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method IsValidFieldElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::ECCurve* New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method NormalizeAll, addr 0x244b428, size 0x2c, virtual true, abstract: false, final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method NormalizeAll, addr 0x244b454, size 0x2ec, virtual true, abstract: false, final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len,
                           ::Org::BouncyCastle::Math::EC::ECFieldElement* iso);

  /// @brief Method Precompute, addr 0x244afa8, size 0x370, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name,
                                                                            ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback);

  /// @brief Method RandomFieldElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method SupportsCoordinateSystem, addr 0x244ad84, size 0xc, virtual true, abstract: false, final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method ValidatePoint, addr 0x244ab40, size 0x80, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method ValidatePoint, addr 0x244abcc, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& __cordl_internal_get_m_a() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_a();

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& __cordl_internal_get_m_b() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_b();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_m_cofactor() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_cofactor();

  constexpr int32_t const& __cordl_internal_get_m_coord() const;

  constexpr int32_t& __cordl_internal_get_m_coord();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* const& __cordl_internal_get_m_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_m_endomorphism();

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField* const& __cordl_internal_get_m_field() const;

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& __cordl_internal_get_m_field();

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* const& __cordl_internal_get_m_multiplier() const;

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __cordl_internal_get_m_multiplier();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_m_order() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_m_order();

  constexpr void __cordl_internal_set_m_a(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_b(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_cofactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_m_coord(int32_t value);

  constexpr void __cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_m_field(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  constexpr void __cordl_internal_set_m_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  constexpr void __cordl_internal_set_m_order(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x244aa50, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method get_A, addr 0x244b748, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_A();

  /// @brief Method get_B, addr 0x244b750, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_B();

  /// @brief Method get_Cofactor, addr 0x244b760, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Cofactor();

  /// @brief Method get_CoordinateSystem, addr 0x244b768, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CoordinateSystem();

  /// @brief Method get_Field, addr 0x244b740, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Field();

  /// @brief Method get_FieldSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Infinity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_Order, addr 0x244b758, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1361 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_field) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_a) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_b) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_order) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_cofactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_coord) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_endomorphism) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECCurve, ___m_multiplier) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECCurve, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve*, "Org.BouncyCastle.Math.EC", "ECCurve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve_Config);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve_Config*, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve_DefaultLookupTable*, "Org.BouncyCastle.Math.EC", "ECCurve/DefaultLookupTable");
