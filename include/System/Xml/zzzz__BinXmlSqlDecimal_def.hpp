#pragma once
// IWYU pragma private; include "System/Xml/BinXmlSqlDecimal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinXmlSqlDecimal)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml {
struct BinXmlSqlDecimal;
}
// Write type traits
MARK_VAL_T(::System::Xml::BinXmlSqlDecimal);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.BinXmlSqlDecimal
struct CORDL_TYPE BinXmlSqlDecimal {
public:
  // Declarations
  /// @brief Field DUINT_BASE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DUINT_BASE, put = setStaticF_DUINT_BASE)) double_t DUINT_BASE;

  /// @brief Field DUINT_BASE2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DUINT_BASE2, put = setStaticF_DUINT_BASE2)) double_t DUINT_BASE2;

  /// @brief Field DUINT_BASE3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DUINT_BASE3, put = setStaticF_DUINT_BASE3)) double_t DUINT_BASE3;

  __declspec(property(get = get_IsPositive)) bool IsPositive;

  /// @brief Field MaxPrecision, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_MaxPrecision, put = setStaticF_MaxPrecision)) uint8_t MaxPrecision;

  /// @brief Field MaxScale, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_MaxScale, put = setStaticF_MaxScale)) uint8_t MaxScale;

  /// @brief Field NUMERIC_MAX_PRECISION, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_NUMERIC_MAX_PRECISION, put = setStaticF_NUMERIC_MAX_PRECISION)) uint8_t NUMERIC_MAX_PRECISION;

  /// @brief Field rgCLenFromPrec, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rgCLenFromPrec, put = setStaticF_rgCLenFromPrec)) ::ArrayW<uint8_t, ::Array<uint8_t>*> rgCLenFromPrec;

  /// @brief Field x_cNumeMax, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_x_cNumeMax, put = setStaticF_x_cNumeMax)) int32_t x_cNumeMax;

  /// @brief Field x_lInt32Base, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x_lInt32Base, put = setStaticF_x_lInt32Base)) int64_t x_lInt32Base;

  /// @brief Field x_llMax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x_llMax, put = setStaticF_x_llMax)) uint64_t x_llMax;

  /// @brief Field x_rgulShiftBase, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x_rgulShiftBase, put = setStaticF_x_rgulShiftBase)) ::ArrayW<uint32_t, ::Array<uint32_t>*> x_rgulShiftBase;

  /// @brief Field x_ulInt32Base, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x_ulInt32Base, put = setStaticF_x_ulInt32Base)) uint64_t x_ulInt32Base;

  /// @brief Field x_ulInt32BaseForMod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x_ulInt32BaseForMod, put = setStaticF_x_ulInt32BaseForMod)) uint64_t x_ulInt32BaseForMod;

  /// @brief Method ChFromDigit, addr 0x5f77610, size 0x8, virtual false, abstract: false, final false
  static inline char16_t ChFromDigit(uint32_t uiDigit);

  /// @brief Method MpDiv1, addr 0x5f774e0, size 0xd8, virtual false, abstract: false, final false
  static inline void MpDiv1(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulU, ::ByRef<int32_t> ciulU, uint32_t iulD, ::ByRef<uint32_t> iulR);

  /// @brief Method MpNormalize, addr 0x5f775b8, size 0x58, virtual false, abstract: false, final false
  static inline void MpNormalize(::ArrayW<uint32_t, ::Array<uint32_t>*> rgulU, ::ByRef<int32_t> ciulU);

  /// @brief Method ToDecimal, addr 0x5f77618, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToString, addr 0x5f77744, size 0x2c0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TrimTrailingZeros, addr 0x5f7730c, size 0x1d4, virtual false, abstract: false, final false
  inline void TrimTrailingZeros();

  /// @brief Method UIntFromByteArray, addr 0x5f7729c, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t UIntFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method .ctor, addr 0x5f77004, size 0x298, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, bool trim);

  static inline double_t getStaticF_DUINT_BASE();

  static inline double_t getStaticF_DUINT_BASE2();

  static inline double_t getStaticF_DUINT_BASE3();

  static inline uint8_t getStaticF_MaxPrecision();

  static inline uint8_t getStaticF_MaxScale();

  static inline uint8_t getStaticF_NUMERIC_MAX_PRECISION();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_rgCLenFromPrec();

  static inline int32_t getStaticF_x_cNumeMax();

  static inline int64_t getStaticF_x_lInt32Base();

  static inline uint64_t getStaticF_x_llMax();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_x_rgulShiftBase();

  static inline uint64_t getStaticF_x_ulInt32Base();

  static inline uint64_t getStaticF_x_ulInt32BaseForMod();

  /// @brief Method get_IsPositive, addr 0x5f76ff4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsPositive();

  static inline void setStaticF_DUINT_BASE(double_t value);

  static inline void setStaticF_DUINT_BASE2(double_t value);

  static inline void setStaticF_DUINT_BASE3(double_t value);

  static inline void setStaticF_MaxPrecision(uint8_t value);

  static inline void setStaticF_MaxScale(uint8_t value);

  static inline void setStaticF_NUMERIC_MAX_PRECISION(uint8_t value);

  static inline void setStaticF_rgCLenFromPrec(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_x_cNumeMax(int32_t value);

  static inline void setStaticF_x_lInt32Base(int64_t value);

  static inline void setStaticF_x_llMax(uint64_t value);

  static inline void setStaticF_x_rgulShiftBase(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_x_ulInt32Base(uint64_t value);

  static inline void setStaticF_x_ulInt32BaseForMod(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinXmlSqlDecimal();

  // Ctor Parameters [CppParam { name: "m_bLen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_bPrec", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_bScale", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_bSign", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_data1", ty: "uint32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_data2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_data3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_data4", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BinXmlSqlDecimal(uint8_t m_bLen, uint8_t m_bPrec, uint8_t m_bScale, uint8_t m_bSign, uint32_t m_data1, uint32_t m_data2, uint32_t m_data3, uint32_t m_data4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9223 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_bLen, offset: 0x0, size: 0x1, def value: None
  uint8_t m_bLen;

  /// @brief Field m_bPrec, offset: 0x1, size: 0x1, def value: None
  uint8_t m_bPrec;

  /// @brief Field m_bScale, offset: 0x2, size: 0x1, def value: None
  uint8_t m_bScale;

  /// @brief Field m_bSign, offset: 0x3, size: 0x1, def value: None
  uint8_t m_bSign;

  /// @brief Field m_data1, offset: 0x4, size: 0x4, def value: None
  uint32_t m_data1;

  /// @brief Field m_data2, offset: 0x8, size: 0x4, def value: None
  uint32_t m_data2;

  /// @brief Field m_data3, offset: 0xc, size: 0x4, def value: None
  uint32_t m_data3;

  /// @brief Field m_data4, offset: 0x10, size: 0x4, def value: None
  uint32_t m_data4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_bLen) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_bPrec) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_bScale) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_bSign) == 0x3, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_data1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_data2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_data3) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BinXmlSqlDecimal, m_data4) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::BinXmlSqlDecimal, 0x14>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlSqlDecimal, "System.Xml", "BinXmlSqlDecimal");
