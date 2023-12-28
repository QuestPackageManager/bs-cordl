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
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class __ECCurve__DefaultLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class __ECCurve__Config;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1359))
// CS Name: ::ECCurve::Config*
class CORDL_TYPE __ECCurve__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field outer, offset 0x10, size 0x8
  __declspec(property(get = __get_outer, put = __set_outer))::Org::BouncyCastle::Math::EC::ECCurve* outer;

  /// @brief Field coord, offset 0x18, size 0x4
  __declspec(property(get = __get_coord, put = __set_coord)) int32_t coord;

  /// @brief Field endomorphism, offset 0x20, size 0x8
  __declspec(property(get = __get_endomorphism, put = __set_endomorphism))::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism;

  /// @brief Field multiplier, offset 0x28, size 0x8
  __declspec(property(get = __get_multiplier, put = __set_multiplier))::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __get_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __get_outer() const;

  constexpr void __set_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr int32_t& __get_coord();

  constexpr int32_t const& __get_coord() const;

  constexpr void __set_coord(int32_t value);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __get_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __get_endomorphism() const;

  constexpr void __set_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __get_multiplier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*> const& __get_multiplier() const;

  constexpr void __set_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  static inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord,
                                                                           ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                           ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  /// @brief Method .ctor addr 0xfc9df8 size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, int32_t coord, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                    ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  /// @brief Method SetCoordinateSystem addr 0xfcb7cc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetCoordinateSystem(int32_t coord);

  /// @brief Method SetEndomorphism addr 0xfcb7d4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetEndomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);

  /// @brief Method SetMultiplier addr 0xfcb7dc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* SetMultiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* multiplier);

  /// @brief Method Create addr 0xfcb7e4 size 0xdc virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* Create();

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ECCurve__Config(__ECCurve__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ECCurve__Config(__ECCurve__Config const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ECCurve__Config();

public:
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

} // namespace Org::BouncyCastle::Math::EC
// Type: ::DefaultLookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1360))
// CS Name: ::ECCurve::DefaultLookupTable*
class CORDL_TYPE __ECCurve__DefaultLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::ECCurve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __get_m_table, put = __set_m_table))::ArrayW<uint8_t, ::Array<uint8_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __get_m_size, put = __set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_table();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_table() const;

  constexpr void __set_m_table(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_m_size();

  constexpr int32_t const& __get_m_size() const;

  constexpr void __set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  /// @brief Method .ctor addr 0xfcac98 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* outer, ::ArrayW<uint8_t, ::Array<uint8_t>*> table, int32_t size);

  /// @brief Method get_Size addr 0xfcb8c8 size 0x8 virtual true final false
  inline int32_t get_Size();

  /// @brief Method Lookup addr 0xfcb8d0 size 0x180 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar addr 0xfcbb50 size 0x144 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint addr 0xfcba50 size 0x100 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__DefaultLookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ECCurve__DefaultLookupTable(__ECCurve__DefaultLookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ECCurve__DefaultLookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ECCurve__DefaultLookupTable(__ECCurve__DefaultLookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ECCurve__DefaultLookupTable();

public:
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

} // namespace Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::ECCurve
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1361))
// CS Name: ::Org.BouncyCastle.Math.EC::ECCurve*
class CORDL_TYPE ECCurve : public ::System::Object {
public:
  // Declarations
  using DefaultLookupTable = ::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable;

  using Config = ::Org::BouncyCastle::Math::EC::__ECCurve__Config;

  /// @brief Field m_field, offset 0x10, size 0x8
  __declspec(property(get = __get_m_field, put = __set_m_field))::Org::BouncyCastle::Math::Field::IFiniteField* m_field;

  /// @brief Field m_a, offset 0x18, size 0x8
  __declspec(property(get = __get_m_a, put = __set_m_a))::Org::BouncyCastle::Math::EC::ECFieldElement* m_a;

  /// @brief Field m_b, offset 0x20, size 0x8
  __declspec(property(get = __get_m_b, put = __set_m_b))::Org::BouncyCastle::Math::EC::ECFieldElement* m_b;

  /// @brief Field m_order, offset 0x28, size 0x8
  __declspec(property(get = __get_m_order, put = __set_m_order))::Org::BouncyCastle::Math::BigInteger* m_order;

  /// @brief Field m_cofactor, offset 0x30, size 0x8
  __declspec(property(get = __get_m_cofactor, put = __set_m_cofactor))::Org::BouncyCastle::Math::BigInteger* m_cofactor;

  /// @brief Field m_coord, offset 0x38, size 0x4
  __declspec(property(get = __get_m_coord, put = __set_m_coord)) int32_t m_coord;

  /// @brief Field m_endomorphism, offset 0x40, size 0x8
  __declspec(property(get = __get_m_endomorphism, put = __set_m_endomorphism))::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;

  /// @brief Field m_multiplier, offset 0x48, size 0x8
  __declspec(property(get = __get_m_multiplier, put = __set_m_multiplier))::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_Field))::Org::BouncyCastle::Math::Field::IFiniteField* Field;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::EC::ECFieldElement* A;

  __declspec(property(get = get_B))::Org::BouncyCastle::Math::EC::ECFieldElement* B;

  __declspec(property(get = get_Order))::Org::BouncyCastle::Math::BigInteger* Order;

  __declspec(property(get = get_Cofactor))::Org::BouncyCastle::Math::BigInteger* Cofactor;

  __declspec(property(get = get_CoordinateSystem)) int32_t CoordinateSystem;

  constexpr ::Org::BouncyCastle::Math::Field::IFiniteField*& __get_m_field();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::Field::IFiniteField*> const& __get_m_field() const;

  constexpr void __set_m_field(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __get_m_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __get_m_a() const;

  constexpr void __set_m_a(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __get_m_b();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __get_m_b() const;

  constexpr void __set_m_b(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_order();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_order() const;

  constexpr void __set_m_order(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_cofactor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_cofactor() const;

  constexpr void __set_m_cofactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_m_coord();

  constexpr int32_t const& __get_m_coord() const;

  constexpr void __set_m_coord(int32_t value);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __get_m_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __get_m_endomorphism() const;

  constexpr void __set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& __get_m_multiplier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*> const& __get_m_multiplier() const;

  constexpr void __set_m_multiplier(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* value);

  /// @brief Method GetAllCoordinateSystems addr 0xfc9cdc size 0x70 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetAllCoordinateSystems();

  static inline ::Org::BouncyCastle::Math::EC::ECCurve* New_ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method .ctor addr 0xfc9d4c size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::Field::IFiniteField* field);

  /// @brief Method get_FieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsValidFieldElement addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsValidFieldElement(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method RandomFieldElement addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method Configure addr 0xfc9d7c size 0x7c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::__ECCurve__Config* Configure();

  /// @brief Method ValidatePoint addr 0xfc9e3c size 0x84 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method ValidatePoint addr 0xfc9ecc size 0x8c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  /// @brief Method CreatePoint addr 0xfc9f58 size 0x14 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y);

  /// @brief Method CreatePoint addr 0xfc9f6c size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);

  /// @brief Method CloneCurve addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method CreateRawPoint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method CreateDefaultMultiplier addr 0xfc9fd4 size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();

  /// @brief Method SupportsCoordinateSystem addr 0xfca094 size 0xc virtual true final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method GetPreCompInfo addr 0xfca0a0 size 0x218 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* GetPreCompInfo(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name);

  /// @brief Method Precompute addr 0xfca2b8 size 0x370 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint* point, ::StringW name,
                                                                            ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback);

  /// @brief Method ImportPoint addr 0xfca628 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method NormalizeAll addr 0xfca738 size 0x2c virtual true final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method NormalizeAll addr 0xfca764 size 0x2f0 virtual true final false
  inline void NormalizeAll(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len,
                           ::Org::BouncyCastle::Math::EC::ECFieldElement* iso);

  /// @brief Method get_Infinity addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_Field addr 0xfcaa54 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::Field::IFiniteField* get_Field();

  /// @brief Method get_A addr 0xfcaa5c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_A();

  /// @brief Method get_B addr 0xfcaa64 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_B();

  /// @brief Method get_Order addr 0xfcaa6c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Order();

  /// @brief Method get_Cofactor addr 0xfcaa74 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Cofactor();

  /// @brief Method get_CoordinateSystem addr 0xfcaa7c size 0x8 virtual true final false
  inline int32_t get_CoordinateSystem();

  /// @brief Method CreateCacheSafeLookupTable addr 0xfcaa84 size 0x214 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method CheckPoint addr 0xfcacd4 size 0x98 virtual true final false
  inline void CheckPoint(::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method CheckPoints addr 0xfcad6c size 0x28 virtual true final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points);

  /// @brief Method CheckPoints addr 0xfcad94 size 0x16c virtual true final false
  inline void CheckPoints(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points, int32_t off, int32_t len);

  /// @brief Method Equals addr 0xfcaf00 size 0x150 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECCurve* other);

  /// @brief Method Equals addr 0xfcb050 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xfcb0dc size 0xcc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method DecompressPoint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);

  /// @brief Method GetEndomorphism addr 0xfcb1a8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* GetEndomorphism();

  /// @brief Method GetMultiplier addr 0xfcb1b0 size 0xbc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* GetMultiplier();

  /// @brief Method DecodePoint addr 0xfcb26c size 0x420 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* DecodePoint(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  // Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECCurve(ECCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECCurve(ECCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECCurve();

public:
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

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECCurve*, "Org.BouncyCastle.Math.EC", "ECCurve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__ECCurve__Config);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__ECCurve__Config*, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__ECCurve__DefaultLookupTable*, "Org.BouncyCastle.Math.EC", "ECCurve/DefaultLookupTable");
