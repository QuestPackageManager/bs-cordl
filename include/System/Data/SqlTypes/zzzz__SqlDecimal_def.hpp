#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlDecimal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlDecimal)
namespace System::Data::SqlTypes {
struct EComparison;
}
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
struct Decimal;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlDecimal);
// Type: System.Data.SqlTypes::SqlDecimal
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlDecimal
struct CORDL_TYPE SqlDecimal {
public:
  // Declarations
  __declspec(property(get = get_Data))::ArrayW<int32_t, ::Array<int32_t>*> Data;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsPositive)) bool IsPositive;

  /// @brief Field MaxPrecision, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_MaxPrecision, put = setStaticF_MaxPrecision)) uint8_t MaxPrecision;

  /// @brief Field MaxScale, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_MaxScale, put = setStaticF_MaxScale)) uint8_t MaxScale;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x14
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue))::System::Data::SqlTypes::SqlDecimal MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x14
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue))::System::Data::SqlTypes::SqlDecimal MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x14
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::Data::SqlTypes::SqlDecimal Null;

  __declspec(property(get = get_Scale)) uint8_t Scale;

  __declspec(property(get = get_Value))::System::Decimal Value;

  /// @brief Field s_DBL_DIG, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_DBL_DIG, put = setStaticF_s_DBL_DIG)) uint32_t s_DBL_DIG;

  /// @brief Field s_DMAX_NUME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DMAX_NUME, put = setStaticF_s_DMAX_NUME)) double_t s_DMAX_NUME;

  /// @brief Field s_DUINT_BASE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DUINT_BASE, put = setStaticF_s_DUINT_BASE)) double_t s_DUINT_BASE;

  /// @brief Field s_DUINT_BASE2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DUINT_BASE2, put = setStaticF_s_DUINT_BASE2)) double_t s_DUINT_BASE2;

  /// @brief Field s_DUINT_BASE3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DUINT_BASE3, put = setStaticF_s_DUINT_BASE3)) double_t s_DUINT_BASE3;

  /// @brief Field s_NUMERIC_MAX_PRECISION, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_NUMERIC_MAX_PRECISION, put = setStaticF_s_NUMERIC_MAX_PRECISION)) uint8_t s_NUMERIC_MAX_PRECISION;

  /// @brief Field s_bIsNull, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bIsNull, put = setStaticF_s_bIsNull)) uint8_t s_bIsNull;

  /// @brief Field s_bNegative, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bNegative, put = setStaticF_s_bNegative)) uint8_t s_bNegative;

  /// @brief Field s_bNotNull, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bNotNull, put = setStaticF_s_bNotNull)) uint8_t s_bNotNull;

  /// @brief Field s_bNullMask, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bNullMask, put = setStaticF_s_bNullMask)) uint8_t s_bNullMask;

  /// @brief Field s_bPositive, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bPositive, put = setStaticF_s_bPositive)) uint8_t s_bPositive;

  /// @brief Field s_bReverseNullMask, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bReverseNullMask, put = setStaticF_s_bReverseNullMask)) uint8_t s_bReverseNullMask;

  /// @brief Field s_bReverseSignMask, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bReverseSignMask, put = setStaticF_s_bReverseSignMask)) uint8_t s_bReverseSignMask;

  /// @brief Field s_bSignMask, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_bSignMask, put = setStaticF_s_bSignMask)) uint8_t s_bSignMask;

  /// @brief Field s_cNumeDivScaleMin, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_cNumeDivScaleMin, put = setStaticF_s_cNumeDivScaleMin)) uint8_t s_cNumeDivScaleMin;

  /// @brief Field s_cNumeMax, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_cNumeMax, put = setStaticF_s_cNumeMax)) int32_t s_cNumeMax;

  /// @brief Field s_decimalHelpersHi, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decimalHelpersHi, put = setStaticF_s_decimalHelpersHi))::ArrayW<uint32_t, ::Array<uint32_t>*> s_decimalHelpersHi;

  /// @brief Field s_decimalHelpersHiHi, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decimalHelpersHiHi, put = setStaticF_s_decimalHelpersHiHi))::ArrayW<uint32_t, ::Array<uint32_t>*> s_decimalHelpersHiHi;

  /// @brief Field s_decimalHelpersLo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decimalHelpersLo, put = setStaticF_s_decimalHelpersLo))::ArrayW<uint32_t, ::Array<uint32_t>*> s_decimalHelpersLo;

  /// @brief Field s_decimalHelpersMid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_decimalHelpersMid, put = setStaticF_s_decimalHelpersMid))::ArrayW<uint32_t, ::Array<uint32_t>*> s_decimalHelpersMid;

  /// @brief Field s_dwlT10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT10, put = setStaticF_s_dwlT10)) uint64_t s_dwlT10;

  /// @brief Field s_dwlT11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT11, put = setStaticF_s_dwlT11)) uint64_t s_dwlT11;

  /// @brief Field s_dwlT12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT12, put = setStaticF_s_dwlT12)) uint64_t s_dwlT12;

  /// @brief Field s_dwlT13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT13, put = setStaticF_s_dwlT13)) uint64_t s_dwlT13;

  /// @brief Field s_dwlT14, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT14, put = setStaticF_s_dwlT14)) uint64_t s_dwlT14;

  /// @brief Field s_dwlT15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT15, put = setStaticF_s_dwlT15)) uint64_t s_dwlT15;

  /// @brief Field s_dwlT16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT16, put = setStaticF_s_dwlT16)) uint64_t s_dwlT16;

  /// @brief Field s_dwlT17, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT17, put = setStaticF_s_dwlT17)) uint64_t s_dwlT17;

  /// @brief Field s_dwlT18, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT18, put = setStaticF_s_dwlT18)) uint64_t s_dwlT18;

  /// @brief Field s_dwlT19, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dwlT19, put = setStaticF_s_dwlT19)) uint64_t s_dwlT19;

  /// @brief Field s_lInt32Base, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lInt32Base, put = setStaticF_s_lInt32Base)) int64_t s_lInt32Base;

  /// @brief Field s_llMax, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_llMax, put = setStaticF_s_llMax)) uint64_t s_llMax;

  /// @brief Field s_rgCLenFromPrec, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgCLenFromPrec, put = setStaticF_s_rgCLenFromPrec))::ArrayW<uint8_t, ::Array<uint8_t>*> s_rgCLenFromPrec;

  /// @brief Field s_rgulShiftBase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgulShiftBase, put = setStaticF_s_rgulShiftBase))::ArrayW<uint32_t, ::Array<uint32_t>*> s_rgulShiftBase;

  /// @brief Field s_uiZero, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_uiZero, put = setStaticF_s_uiZero)) uint32_t s_uiZero;

  /// @brief Field s_ulBase10, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulBase10, put = setStaticF_s_ulBase10)) uint32_t s_ulBase10;

  /// @brief Field s_ulInt32Base, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ulInt32Base, put = setStaticF_s_ulInt32Base)) uint64_t s_ulInt32Base;

  /// @brief Field s_ulInt32BaseForMod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ulInt32BaseForMod, put = setStaticF_s_ulInt32BaseForMod)) uint64_t s_ulInt32BaseForMod;

  /// @brief Field s_ulT1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT1, put = setStaticF_s_ulT1)) uint32_t s_ulT1;

  /// @brief Field s_ulT2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT2, put = setStaticF_s_ulT2)) uint32_t s_ulT2;

  /// @brief Field s_ulT3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT3, put = setStaticF_s_ulT3)) uint32_t s_ulT3;

  /// @brief Field s_ulT4, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT4, put = setStaticF_s_ulT4)) uint32_t s_ulT4;

  /// @brief Field s_ulT5, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT5, put = setStaticF_s_ulT5)) uint32_t s_ulT5;

  /// @brief Field s_ulT6, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT6, put = setStaticF_s_ulT6)) uint32_t s_ulT6;

  /// @brief Field s_ulT7, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT7, put = setStaticF_s_ulT7)) uint32_t s_ulT7;

  /// @brief Field s_ulT8, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT8, put = setStaticF_s_ulT8)) uint32_t s_ulT8;

  /// @brief Field s_ulT9, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ulT9, put = setStaticF_s_ulT9)) uint32_t s_ulT9;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method AddULong, addr 0x2d1b93c, size 0x1a0, virtual false, abstract: false, final false
  inline void AddULong(uint32_t ulAdd);

  /// @brief Method AdjustScale, addr 0x2d1c2ac, size 0x310, virtual false, abstract: false, final false
  inline void AdjustScale(int32_t digits, bool fRound);

  /// @brief Method BGetPrecUI4, addr 0x2d1a3f4, size 0x138, virtual false, abstract: false, final false
  static inline uint8_t BGetPrecUI4(uint32_t value);

  /// @brief Method BGetPrecUI8, addr 0x2d1a5f8, size 0x244, virtual false, abstract: false, final false
  static inline uint8_t BGetPrecUI8(uint64_t dwlVal);

  /// @brief Method CalculatePrecision, addr 0x2d19d2c, size 0x218, virtual false, abstract: false, final false
  inline uint8_t CalculatePrecision();

  /// @brief Method ChFromDigit, addr 0x2d1b29c, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ChFromDigit(uint32_t uiDigit);

  /// @brief Method CheckValidPrecScale, addr 0x2d1a980, size 0xe4, virtual false, abstract: false, final false
  static inline void CheckValidPrecScale(uint8_t bPrec, uint8_t bScale);

  /// @brief Method CompareNm, addr 0x2d1e714, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::EComparison CompareNm(::System::Data::SqlTypes::SqlDecimal snumOp);

  /// @brief Method CompareTo, addr 0x2d1f1f0, size 0x1a8, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlDecimal value);

  /// @brief Method CompareTo, addr 0x2d1f0ec, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method DWL, addr 0x2d1e708, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t DWL(uint32_t lo, uint32_t hi);

  /// @brief Method DivByULong, addr 0x2d1e368, size 0x18c, virtual false, abstract: false, final false
  inline uint32_t DivByULong(uint32_t iDivisor);

  /// @brief Method Equals, addr 0x2d1f398, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FGt10_38, addr 0x2d1c714, size 0x74, virtual false, abstract: false, final false
  inline bool FGt10_38();

  /// @brief Method FGt10_38, addr 0x2d1e288, size 0x88, virtual false, abstract: false, final false
  inline bool FGt10_38(::ArrayW<uint32_t, ::Array<uint32_t>*> rglData);

  /// @brief Method FZero, addr 0x2d1aa64, size 0x20, virtual false, abstract: false, final false
  inline bool FZero();

  /// @brief Method GetHashCode, addr 0x2d1f4c4, size 0x110, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x2d1f818, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x2d1ebec, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method HI, addr 0x2d1e6fc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t HI(uint64_t x);

  /// @brief Method LAbsCmp, addr 0x2d1c5bc, size 0x158, virtual false, abstract: false, final false
  inline int32_t LAbsCmp(::System::Data::SqlTypes::SqlDecimal snumOp);

  /// @brief Method LO, addr 0x2d1e704, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t LO(uint64_t x);

  /// @brief Method LessThan, addr 0x2d1eb38, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method MpDiv, addr 0x2d1d460, size 0x830, virtual false, abstract: false, final false
  static inline void MpDiv(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulU, int32_t ciulU, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgulD, int32_t ciulD, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgulQ,
                           ByRef<int32_t> ciulQ, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgulR, ByRef<int32_t> ciulR);

  /// @brief Method MpDiv1, addr 0x2d1b1c8, size 0xd4, virtual false, abstract: false, final false
  static inline void MpDiv1(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulU, ByRef<int32_t> ciulU, uint32_t iulD, ByRef<uint32_t> iulR);

  /// @brief Method MpMove, addr 0x2d1e52c, size 0x64, virtual false, abstract: false, final false
  static inline void MpMove(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulS, int32_t ciulS, ::ArrayW<uint32_t, ::Array<uint32_t>*> rgulD, ByRef<int32_t> ciulD);

  /// @brief Method MpMul1, addr 0x2d1e608, size 0xf4, virtual false, abstract: false, final false
  static inline void MpMul1(::ArrayW<uint32_t, ::Array<uint32_t>*> piulD, ByRef<int32_t> ciulD, uint32_t iulX);

  /// @brief Method MpNormalize, addr 0x2d1e5bc, size 0x4c, virtual false, abstract: false, final false
  static inline void MpNormalize(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulU, ByRef<int32_t> ciulU);

  /// @brief Method MpSet, addr 0x2d1e590, size 0x2c, virtual false, abstract: false, final false
  static inline void MpSet(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulD, ByRef<int32_t> ciulD, uint32_t iulN);

  /// @brief Method MultByULong, addr 0x2d1b750, size 0x1ec, virtual false, abstract: false, final false
  inline void MultByULong(uint32_t uiMultiplier);

  /// @brief Method Parse, addr 0x2d1b2a4, size 0x434, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal Parse(::StringW s);

  /// @brief Method SetPositive, addr 0x2d1aa84, size 0x68, virtual false, abstract: false, final false
  inline void SetPositive();

  /// @brief Method SetSignBit, addr 0x2d1ad38, size 0x84, virtual false, abstract: false, final false
  inline void SetSignBit(bool fPositive);

  /// @brief Method SetToZero, addr 0x2d1b6d8, size 0x78, virtual false, abstract: false, final false
  inline void SetToZero();

  /// @brief Method StoreFromWorkingArray, addr 0x2d1e310, size 0x58, virtual false, abstract: false, final false
  inline void StoreFromWorkingArray(::ArrayW<uint32_t, ::Array<uint32_t>*> rguiData);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2d1f5d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2d1f5dc, size 0x164, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2d1f740, size 0xd8, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToDecimal, addr 0x2d1ab60, size 0x124, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToDouble, addr 0x2d1badc, size 0x130, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToSqlDouble, addr 0x2d1eca0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToSqlInt64, addr 0x2d1edb0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64();

  /// @brief Method ToSqlMoney, addr 0x2d1efcc, size 0x80, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlMoney ToSqlMoney();

  /// @brief Method ToString, addr 0x2d1aeec, size 0x2dc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method VerifyPrecision, addr 0x2d19f44, size 0x21c, virtual false, abstract: false, final false
  inline bool VerifyPrecision(uint8_t precision);

  /// @brief Method ZeroToMaxLen, addr 0x2d1dc90, size 0x7c, virtual false, abstract: false, final false
  static inline void ZeroToMaxLen(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulData, int32_t cUI4sCur);

  /// @brief Method .ctor, addr 0x2d1a160, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x2d1a83c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> rglData, uint8_t bLen, uint8_t bPrec, uint8_t bScale, bool fPositive);

  /// @brief Method .ctor, addr 0x2d1a1c8, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal value);

  /// @brief Method .ctor, addr 0x2d1a320, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x2d1a52c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  static inline uint8_t getStaticF_MaxPrecision();

  static inline uint8_t getStaticF_MaxScale();

  static inline ::System::Data::SqlTypes::SqlDecimal getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlDecimal getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlDecimal getStaticF_Null();

  static inline uint32_t getStaticF_s_DBL_DIG();

  static inline double_t getStaticF_s_DMAX_NUME();

  static inline double_t getStaticF_s_DUINT_BASE();

  static inline double_t getStaticF_s_DUINT_BASE2();

  static inline double_t getStaticF_s_DUINT_BASE3();

  static inline uint8_t getStaticF_s_NUMERIC_MAX_PRECISION();

  static inline uint8_t getStaticF_s_bIsNull();

  static inline uint8_t getStaticF_s_bNegative();

  static inline uint8_t getStaticF_s_bNotNull();

  static inline uint8_t getStaticF_s_bNullMask();

  static inline uint8_t getStaticF_s_bPositive();

  static inline uint8_t getStaticF_s_bReverseNullMask();

  static inline uint8_t getStaticF_s_bReverseSignMask();

  static inline uint8_t getStaticF_s_bSignMask();

  static inline uint8_t getStaticF_s_cNumeDivScaleMin();

  static inline int32_t getStaticF_s_cNumeMax();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_decimalHelpersHi();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_decimalHelpersHiHi();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_decimalHelpersLo();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_decimalHelpersMid();

  static inline uint64_t getStaticF_s_dwlT10();

  static inline uint64_t getStaticF_s_dwlT11();

  static inline uint64_t getStaticF_s_dwlT12();

  static inline uint64_t getStaticF_s_dwlT13();

  static inline uint64_t getStaticF_s_dwlT14();

  static inline uint64_t getStaticF_s_dwlT15();

  static inline uint64_t getStaticF_s_dwlT16();

  static inline uint64_t getStaticF_s_dwlT17();

  static inline uint64_t getStaticF_s_dwlT18();

  static inline uint64_t getStaticF_s_dwlT19();

  static inline int64_t getStaticF_s_lInt32Base();

  static inline uint64_t getStaticF_s_llMax();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_rgCLenFromPrec();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_rgulShiftBase();

  static inline uint32_t getStaticF_s_uiZero();

  static inline uint32_t getStaticF_s_ulBase10();

  static inline uint64_t getStaticF_s_ulInt32Base();

  static inline uint64_t getStaticF_s_ulInt32BaseForMod();

  static inline uint32_t getStaticF_s_ulT1();

  static inline uint32_t getStaticF_s_ulT2();

  static inline uint32_t getStaticF_s_ulT3();

  static inline uint32_t getStaticF_s_ulT4();

  static inline uint32_t getStaticF_s_ulT5();

  static inline uint32_t getStaticF_s_ulT6();

  static inline uint32_t getStaticF_s_ulT7();

  static inline uint32_t getStaticF_s_ulT8();

  static inline uint32_t getStaticF_s_ulT9();

  /// @brief Method get_Data, addr 0x2d1ae10, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Data();

  /// @brief Method get_IsNull, addr 0x2d1aaec, size 0x70, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_IsPositive, addr 0x2d1ac84, size 0xb4, virtual false, abstract: false, final false
  inline bool get_IsPositive();

  /// @brief Method get_Scale, addr 0x2d1adbc, size 0x54, virtual false, abstract: false, final false
  inline uint8_t get_Scale();

  /// @brief Method get_Value, addr 0x2d1ab5c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Decimal get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x2d1bd6c, size 0x540, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Addition(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_Division, addr 0x2d1d06c, size 0x3f4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Division(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_Equality, addr 0x2d1e8f8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_GreaterThan, addr 0x2d1ea78, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_Implicit, addr 0x2d1dd0c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x2d1ddac, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt16 x);

  /// @brief Method op_Implicit, addr 0x2d1deb4, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt32 x);

  /// @brief Method op_Implicit, addr 0x2d1dfbc, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_Implicit, addr 0x2d1e0c4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Data::SqlTypes::SqlMoney x);

  /// @brief Method op_Implicit, addr 0x2d1bc0c, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(::System::Decimal x);

  /// @brief Method op_Implicit, addr 0x2d1bc24, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Implicit___System__Data__SqlTypes__SqlDecimal(int64_t x);

  /// @brief Method op_LessThan, addr 0x2d1e9b8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_Multiply, addr 0x2d1c868, size 0x804, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Multiply(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_Subtraction, addr 0x2d1c788, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_Subtraction(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y);

  /// @brief Method op_UnaryNegation, addr 0x2d1bc8c, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlDecimal op_UnaryNegation(::System::Data::SqlTypes::SqlDecimal x);

  static inline void setStaticF_MaxPrecision(uint8_t value);

  static inline void setStaticF_MaxScale(uint8_t value);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlDecimal value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlDecimal value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlDecimal value);

  static inline void setStaticF_s_DBL_DIG(uint32_t value);

  static inline void setStaticF_s_DMAX_NUME(double_t value);

  static inline void setStaticF_s_DUINT_BASE(double_t value);

  static inline void setStaticF_s_DUINT_BASE2(double_t value);

  static inline void setStaticF_s_DUINT_BASE3(double_t value);

  static inline void setStaticF_s_NUMERIC_MAX_PRECISION(uint8_t value);

  static inline void setStaticF_s_bIsNull(uint8_t value);

  static inline void setStaticF_s_bNegative(uint8_t value);

  static inline void setStaticF_s_bNotNull(uint8_t value);

  static inline void setStaticF_s_bNullMask(uint8_t value);

  static inline void setStaticF_s_bPositive(uint8_t value);

  static inline void setStaticF_s_bReverseNullMask(uint8_t value);

  static inline void setStaticF_s_bReverseSignMask(uint8_t value);

  static inline void setStaticF_s_bSignMask(uint8_t value);

  static inline void setStaticF_s_cNumeDivScaleMin(uint8_t value);

  static inline void setStaticF_s_cNumeMax(int32_t value);

  static inline void setStaticF_s_decimalHelpersHi(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_decimalHelpersHiHi(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_decimalHelpersLo(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_decimalHelpersMid(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_dwlT10(uint64_t value);

  static inline void setStaticF_s_dwlT11(uint64_t value);

  static inline void setStaticF_s_dwlT12(uint64_t value);

  static inline void setStaticF_s_dwlT13(uint64_t value);

  static inline void setStaticF_s_dwlT14(uint64_t value);

  static inline void setStaticF_s_dwlT15(uint64_t value);

  static inline void setStaticF_s_dwlT16(uint64_t value);

  static inline void setStaticF_s_dwlT17(uint64_t value);

  static inline void setStaticF_s_dwlT18(uint64_t value);

  static inline void setStaticF_s_dwlT19(uint64_t value);

  static inline void setStaticF_s_lInt32Base(int64_t value);

  static inline void setStaticF_s_llMax(uint64_t value);

  static inline void setStaticF_s_rgCLenFromPrec(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_s_rgulShiftBase(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_s_uiZero(uint32_t value);

  static inline void setStaticF_s_ulBase10(uint32_t value);

  static inline void setStaticF_s_ulInt32Base(uint64_t value);

  static inline void setStaticF_s_ulInt32BaseForMod(uint64_t value);

  static inline void setStaticF_s_ulT1(uint32_t value);

  static inline void setStaticF_s_ulT2(uint32_t value);

  static inline void setStaticF_s_ulT3(uint32_t value);

  static inline void setStaticF_s_ulT4(uint32_t value);

  static inline void setStaticF_s_ulT5(uint32_t value);

  static inline void setStaticF_s_ulT6(uint32_t value);

  static inline void setStaticF_s_ulT7(uint32_t value);

  static inline void setStaticF_s_ulT8(uint32_t value);

  static inline void setStaticF_s_ulT9(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlDecimal();

  // Ctor Parameters [CppParam { name: "_bStatus", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_bLen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "_bPrec", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_bScale", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_data4", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr SqlDecimal(uint8_t _bStatus, uint8_t _bLen, uint8_t _bPrec, uint8_t _bScale, uint32_t _data1, uint32_t _data2, uint32_t _data3, uint32_t _data4) noexcept;

  /// @brief Field _bStatus, offset: 0x0, size: 0x1, def value: None
  uint8_t _bStatus;

  /// @brief Field _bLen, offset: 0x1, size: 0x1, def value: None
  uint8_t _bLen;

  /// @brief Field _bPrec, offset: 0x2, size: 0x1, def value: None
  uint8_t _bPrec;

  /// @brief Field _bScale, offset: 0x3, size: 0x1, def value: None
  uint8_t _bScale;

  /// @brief Field _data1, offset: 0x4, size: 0x4, def value: None
  uint32_t _data1;

  /// @brief Field _data2, offset: 0x8, size: 0x4, def value: None
  uint32_t _data2;

  /// @brief Field _data3, offset: 0xc, size: 0x4, def value: None
  uint32_t _data3;

  /// @brief Field _data4, offset: 0x10, size: 0x4, def value: None
  uint32_t _data4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlDecimal, 0x14>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _bStatus) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _bLen) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _bPrec) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _bScale) == 0x3, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _data1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _data2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _data3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDecimal, _data4) == 0x10, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlDecimal, "System.Data.SqlTypes", "SqlDecimal");
