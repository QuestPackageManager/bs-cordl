#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPoint)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint_ValidityCallback;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint_ValidityCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECPoint);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECPoint/ValidityCallback
class CORDL_TYPE ECPoint_ValidityCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_checkOrder, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_checkOrder, put = __cordl_internal_set_m_checkOrder)) bool m_checkOrder;

  /// @brief Field m_decompressed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_decompressed, put = __cordl_internal_set_m_decompressed)) bool m_decompressed;

  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer)) ::Org::BouncyCastle::Math::EC::ECPoint* m_outer;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder);

  /// @brief Method Precompute, addr 0x3383b1c, size 0x110, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr bool const& __cordl_internal_get_m_checkOrder() const;

  constexpr bool& __cordl_internal_get_m_checkOrder();

  constexpr bool const& __cordl_internal_get_m_decompressed() const;

  constexpr bool& __cordl_internal_get_m_decompressed();

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& __cordl_internal_get_m_outer() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_outer();

  constexpr void __cordl_internal_set_m_checkOrder(bool value);

  constexpr void __cordl_internal_set_m_decompressed(bool value);

  constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x3383160, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPoint_ValidityCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPoint_ValidityCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPoint_ValidityCallback(ECPoint_ValidityCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPoint_ValidityCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPoint_ValidityCallback(ECPoint_ValidityCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1371 };

  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_outer;

  /// @brief Field m_decompressed, offset: 0x18, size: 0x1, def value: None
  bool ___m_decompressed;

  /// @brief Field m_checkOrder, offset: 0x19, size: 0x1, def value: None
  bool ___m_checkOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback, ___m_decompressed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback, ___m_checkOrder) == 0x19, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.ECPoint
class CORDL_TYPE ECPoint : public ::System::Object {
public:
  // Declarations
  using ValidityCallback = ::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback;

  __declspec(property(get = get_AffineXCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* AffineXCoord;

  __declspec(property(get = get_AffineYCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* AffineYCoord;

  __declspec(property(get = get_CompressionYTilde)) bool CompressionYTilde;

  __declspec(property(get = get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  __declspec(property(get = get_CurveCoordinateSystem)) int32_t CurveCoordinateSystem;

  /// @brief Field EMPTY_ZS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EMPTY_ZS, put = setStaticF_EMPTY_ZS)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>
      EMPTY_ZS;

  __declspec(property(get = get_IsCompressed)) bool IsCompressed;

  __declspec(property(get = get_IsInfinity)) bool IsInfinity;

  /// @brief Field Random, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Random, put = setStaticF_Random)) ::Org::BouncyCastle::Security::SecureRandom* Random;

  __declspec(property(get = get_RawXCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* RawXCoord;

  __declspec(property(get = get_RawYCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* RawYCoord;

  __declspec(property(get = get_RawZCoords)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> RawZCoords;

  __declspec(property(get = get_XCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* XCoord;

  __declspec(property(get = get_YCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement* YCoord;

  /// @brief Field m_curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_curve, put = __cordl_internal_set_m_curve)) ::Org::BouncyCastle::Math::EC::ECCurve* m_curve;

  /// @brief Field m_preCompTable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_preCompTable, put = __cordl_internal_set_m_preCompTable)) ::System::Collections::IDictionary* m_preCompTable;

  /// @brief Field m_withCompression, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_withCompression, put = __cordl_internal_set_m_withCompression)) bool m_withCompression;

  /// @brief Field m_x, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_x, put = __cordl_internal_set_m_x)) ::Org::BouncyCastle::Math::EC::ECFieldElement* m_x;

  /// @brief Field m_y, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_y, put = __cordl_internal_set_m_y)) ::Org::BouncyCastle::Math::EC::ECFieldElement* m_y;

  /// @brief Field m_zs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_zs,
                      put = __cordl_internal_set_m_zs)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>
      m_zs;

  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method CheckNormalized, addr 0x3382d58, size 0x68, virtual true, abstract: false, final false
  inline void CheckNormalized();

  /// @brief Method CreateScaledPoint, addr 0x33830b0, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateScaledPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* sx, ::Org::BouncyCastle::Math::EC::ECFieldElement* sy);

  /// @brief Method Detach, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method Equals, addr 0x3383410, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x33834a8, size 0x28c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECPoint* other);

  /// @brief Method GetDetachedPoint, addr 0x3382bc8, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* GetDetachedPoint();

  /// @brief Method GetEncoded, addr 0x3383970, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(bool compressed);

  /// @brief Method GetHashCode, addr 0x3383734, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInitialZCoords, addr 0x338274c, size 0x2d4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> GetInitialZCoords(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  /// @brief Method GetZCoord, addr 0x3382c80, size 0x34, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method GetZCoords, addr 0x3382cb4, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> GetZCoords();

  /// @brief Method ImplIsValid, addr 0x337e830, size 0x13c, virtual false, abstract: false, final false
  inline bool ImplIsValid(bool decompressed, bool checkOrder);

  /// @brief Method IsNormalized, addr 0x3382dc0, size 0x70, virtual true, abstract: false, final false
  inline bool IsNormalized();

  /// @brief Method IsValid, addr 0x337d124, size 0xc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidPartial, addr 0x3383154, size 0xc, virtual false, abstract: false, final false
  inline bool IsValidPartial();

  /// @brief Method Multiply, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Negate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  static inline ::Org::BouncyCastle::Math::EC::ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                 ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                 bool withCompression);

  /// @brief Method Normalize, addr 0x3382e30, size 0x190, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Normalize();

  /// @brief Method Normalize, addr 0x3382fc0, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Normalize(::Org::BouncyCastle::Math::EC::ECFieldElement* zInv);

  /// @brief Method SatisfiesCurveEquation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool SatisfiesCurveEquation();

  /// @brief Method SatisfiesOrder, addr 0x3382ac4, size 0x104, virtual true, abstract: false, final false
  inline bool SatisfiesOrder();

  /// @brief Method ScaleX, addr 0x3383170, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleXNegateY, addr 0x3383200, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleXNegateY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleY, addr 0x33832b0, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleYNegateX, addr 0x3383354, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleYNegateX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method Subtract, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes, addr 0x3383a60, size 0x14, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method TimesPow2, addr 0x3383984, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);

  /// @brief Method ToString, addr 0x33837f8, size 0x178, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Twice, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus, addr 0x3383a24, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_m_curve() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_m_curve();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_m_preCompTable() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_m_preCompTable();

  constexpr bool const& __cordl_internal_get_m_withCompression() const;

  constexpr bool& __cordl_internal_get_m_withCompression();

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& __cordl_internal_get_m_x() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_x();

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& __cordl_internal_get_m_y() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __cordl_internal_get_m_y();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> const& __cordl_internal_get_m_zs() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>& __cordl_internal_get_m_zs();

  constexpr void __cordl_internal_set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_m_preCompTable(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_m_withCompression(bool value);

  constexpr void __cordl_internal_set_m_x(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_y(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr void __cordl_internal_set_m_zs(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  /// @brief Method .ctor, addr 0x3382a20, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0x3382ab0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_EMPTY_ZS();

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF_Random();

  /// @brief Method get_AffineXCoord, addr 0x3382c18, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineXCoord();

  /// @brief Method get_AffineYCoord, addr 0x3382c44, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineYCoord();

  /// @brief Method get_CompressionYTilde, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CompressionYTilde();

  /// @brief Method get_Curve, addr 0x3382bf4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

  /// @brief Method get_CurveCoordinateSystem, addr 0x3382bfc, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_CurveCoordinateSystem();

  /// @brief Method get_IsCompressed, addr 0x338314c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompressed();

  /// @brief Method get_IsInfinity, addr 0x337d938, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsInfinity();

  /// @brief Method get_RawXCoord, addr 0x3382d40, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawXCoord();

  /// @brief Method get_RawYCoord, addr 0x3382d48, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawYCoord();

  /// @brief Method get_RawZCoords, addr 0x3382d50, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> get_RawZCoords();

  /// @brief Method get_XCoord, addr 0x3382c70, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_XCoord();

  /// @brief Method get_YCoord, addr 0x3382c78, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();

  static inline void setStaticF_EMPTY_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline void setStaticF_Random(::Org::BouncyCastle::Security::SecureRandom* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPoint(ECPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPoint(ECPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1372 };

  /// @brief Field m_curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___m_curve;

  /// @brief Field m_x, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___m_x;

  /// @brief Field m_y, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___m_y;

  /// @brief Field m_zs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> ___m_zs;

  /// @brief Field m_withCompression, offset: 0x30, size: 0x1, def value: None
  bool ___m_withCompression;

  /// @brief Field m_preCompTable, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___m_preCompTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_y) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_zs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_withCompression) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_preCompTable) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECPoint, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPoint*, "Org.BouncyCastle.Math.EC", "ECPoint");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPoint_ValidityCallback*, "Org.BouncyCastle.Math.EC", "ECPoint/ValidityCallback");
