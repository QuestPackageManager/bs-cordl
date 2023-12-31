#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __ECPoint__ValidityCallback;
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
class __ECPoint__ValidityCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECPoint);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback);
// Type: ::ValidityCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1371))
// CS Name: ::ECPoint::ValidityCallback*
class CORDL_TYPE __ECPoint__ValidityCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::ECPoint* m_outer;

  /// @brief Field m_decompressed, offset 0x18, size 0x1
  __declspec(property(get = __get_m_decompressed, put = __set_m_decompressed)) bool m_decompressed;

  /// @brief Field m_checkOrder, offset 0x19, size 0x1
  __declspec(property(get = __get_m_checkOrder, put = __set_m_checkOrder)) bool m_checkOrder;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr bool& __get_m_decompressed();

  constexpr bool const& __get_m_decompressed() const;

  constexpr void __set_m_decompressed(bool value);

  constexpr bool& __get_m_checkOrder();

  constexpr bool const& __get_m_checkOrder() const;

  constexpr void __set_m_checkOrder(bool value);

  static inline ::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder);

  /// @brief Method .ctor, addr 0xfcffd8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder);

  /// @brief Method Precompute, addr 0xfd09a8, size 0x120, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  // Ctor Parameters [CppParam { name: "", ty: "__ECPoint__ValidityCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ECPoint__ValidityCallback(__ECPoint__ValidityCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ECPoint__ValidityCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ECPoint__ValidityCallback(__ECPoint__ValidityCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ECPoint__ValidityCallback();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_outer;

  /// @brief Field m_decompressed, offset: 0x18, size: 0x1, def value: None
  bool ___m_decompressed;

  /// @brief Field m_checkOrder, offset: 0x19, size: 0x1, def value: None
  bool ___m_checkOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback, ___m_decompressed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback, ___m_checkOrder) == 0x19, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::ECPoint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1372))
// CS Name: ::Org.BouncyCastle.Math.EC::ECPoint*
class CORDL_TYPE ECPoint : public ::System::Object {
public:
  // Declarations
  using ValidityCallback = ::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback;

  /// @brief Field m_curve, offset 0x10, size 0x8
  __declspec(property(get = __get_m_curve, put = __set_m_curve))::Org::BouncyCastle::Math::EC::ECCurve* m_curve;

  /// @brief Field m_x, offset 0x18, size 0x8
  __declspec(property(get = __get_m_x, put = __set_m_x))::Org::BouncyCastle::Math::EC::ECFieldElement* m_x;

  /// @brief Field m_y, offset 0x20, size 0x8
  __declspec(property(get = __get_m_y, put = __set_m_y))::Org::BouncyCastle::Math::EC::ECFieldElement* m_y;

  /// @brief Field m_zs, offset 0x28, size 0x8
  __declspec(property(get = __get_m_zs, put = __set_m_zs))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> m_zs;

  /// @brief Field m_withCompression, offset 0x30, size 0x1
  __declspec(property(get = __get_m_withCompression, put = __set_m_withCompression)) bool m_withCompression;

  /// @brief Field m_preCompTable, offset 0x38, size 0x8
  __declspec(property(get = __get_m_preCompTable, put = __set_m_preCompTable))::System::Collections::IDictionary* m_preCompTable;

  /// @brief Field Random, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Random, put = setStaticF_Random))::Org::BouncyCastle::Security::SecureRandom* Random;

  /// @brief Field EMPTY_ZS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EMPTY_ZS,
                             put = setStaticF_EMPTY_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> EMPTY_ZS;

  __declspec(property(get = get_Curve))::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  __declspec(property(get = get_CurveCoordinateSystem)) int32_t CurveCoordinateSystem;

  __declspec(property(get = get_AffineXCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* AffineXCoord;

  __declspec(property(get = get_AffineYCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* AffineYCoord;

  __declspec(property(get = get_XCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* XCoord;

  __declspec(property(get = get_YCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* YCoord;

  __declspec(property(get = get_RawXCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* RawXCoord;

  __declspec(property(get = get_RawYCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* RawYCoord;

  __declspec(property(get = get_RawZCoords))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> RawZCoords;

  __declspec(property(get = get_IsInfinity)) bool IsInfinity;

  __declspec(property(get = get_IsCompressed)) bool IsCompressed;

  __declspec(property(get = get_CompressionYTilde)) bool CompressionYTilde;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __get_m_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __get_m_curve() const;

  constexpr void __set_m_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __get_m_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __get_m_x() const;

  constexpr void __set_m_x(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __get_m_y();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __get_m_y() const;

  constexpr void __set_m_y(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>& __get_m_zs();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> const& __get_m_zs() const;

  constexpr void __set_m_zs(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  constexpr bool& __get_m_withCompression();

  constexpr bool const& __get_m_withCompression() const;

  constexpr void __set_m_withCompression(bool value);

  constexpr ::System::Collections::IDictionary*& __get_m_preCompTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_m_preCompTable() const;

  constexpr void __set_m_preCompTable(::System::Collections::IDictionary* value);

  static inline void setStaticF_Random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF_Random();

  static inline void setStaticF_EMPTY_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_EMPTY_ZS();

  /// @brief Method GetInitialZCoords, addr 0xfcf598, size 0x2a8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> GetInitialZCoords(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  static inline ::Org::BouncyCastle::Math::EC::ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor, addr 0xfcf840, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                 ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                 bool withCompression);

  /// @brief Method .ctor, addr 0xfcf8dc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method SatisfiesCurveEquation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool SatisfiesCurveEquation();

  /// @brief Method SatisfiesOrder, addr 0xfcf930, size 0x100, virtual true, abstract: false, final false
  inline bool SatisfiesOrder();

  /// @brief Method GetDetachedPoint, addr 0xfcfa30, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* GetDetachedPoint();

  /// @brief Method get_Curve, addr 0xfcfa5c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

  /// @brief Method Detach, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method get_CurveCoordinateSystem, addr 0xfcfa64, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_CurveCoordinateSystem();

  /// @brief Method get_AffineXCoord, addr 0xfcfa80, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineXCoord();

  /// @brief Method get_AffineYCoord, addr 0xfcfaac, size 0x2c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_AffineYCoord();

  /// @brief Method get_XCoord, addr 0xfcfad8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_XCoord();

  /// @brief Method get_YCoord, addr 0xfcfae0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();

  /// @brief Method GetZCoord, addr 0xfcfae8, size 0x40, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);

  /// @brief Method GetZCoords, addr 0xfcfb28, size 0x88, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> GetZCoords();

  /// @brief Method get_RawXCoord, addr 0xfcfbb0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawXCoord();

  /// @brief Method get_RawYCoord, addr 0xfcfbb8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_RawYCoord();

  /// @brief Method get_RawZCoords, addr 0xfcfbc0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> get_RawZCoords();

  /// @brief Method CheckNormalized, addr 0xfcfbc8, size 0x6c, virtual true, abstract: false, final false
  inline void CheckNormalized();

  /// @brief Method IsNormalized, addr 0xfcfc34, size 0x70, virtual true, abstract: false, final false
  inline bool IsNormalized();

  /// @brief Method Normalize, addr 0xfcfca4, size 0x190, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Normalize();

  /// @brief Method Normalize, addr 0xfcfe34, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Normalize(::Org::BouncyCastle::Math::EC::ECFieldElement* zInv);

  /// @brief Method CreateScaledPoint, addr 0xfcff28, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateScaledPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* sx, ::Org::BouncyCastle::Math::EC::ECFieldElement* sy);

  /// @brief Method get_IsInfinity, addr 0xfca718, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsInfinity();

  /// @brief Method get_IsCompressed, addr 0xfcffc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompressed();

  /// @brief Method IsValid, addr 0xfc9ec0, size 0xc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValidPartial, addr 0xfcffcc, size 0xc, virtual false, abstract: false, final false
  inline bool IsValidPartial();

  /// @brief Method ImplIsValid, addr 0xfcb68c, size 0x140, virtual false, abstract: false, final false
  inline bool ImplIsValid(bool decompressed, bool checkOrder);

  /// @brief Method ScaleX, addr 0xfd0018, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleXNegateY, addr 0xfd00a8, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleXNegateY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleY, addr 0xfd0158, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method ScaleYNegateX, addr 0xfd01fc, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ScaleYNegateX(::Org::BouncyCastle::Math::EC::ECFieldElement* scale);

  /// @brief Method Equals, addr 0xfd02b8, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xfd0344, size 0x2b0, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECPoint* other);

  /// @brief Method GetHashCode, addr 0xfd05f4, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0xfd06b8, size 0x148, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetEncoded, addr 0xfd0800, size 0x14, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(bool compressed);

  /// @brief Method get_CompressionYTilde, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CompressionYTilde();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Negate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  /// @brief Method TimesPow2, addr 0xfd0814, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);

  /// @brief Method Twice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Multiply(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method TwicePlus, addr 0xfd08b4, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes, addr 0xfd08f0, size 0x14, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  // Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPoint(ECPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPoint(ECPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPoint();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECPoint, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_y) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_zs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_withCompression) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::ECPoint, ___m_preCompTable) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPoint*, "Org.BouncyCastle.Math.EC", "ECPoint");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__ECPoint__ValidityCallback*, "Org.BouncyCastle.Math.EC", "ECPoint/ValidityCallback");
