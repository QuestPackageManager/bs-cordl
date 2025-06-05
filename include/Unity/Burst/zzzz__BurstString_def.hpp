#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString)
namespace Unity::Burst {
struct BurstString_CutoffMode;
}
namespace Unity::Burst {
struct BurstString_FormatOptions;
}
namespace Unity::Burst {
struct BurstString_NumberBufferKind;
}
namespace Unity::Burst {
struct BurstString_NumberBuffer;
}
namespace Unity::Burst {
struct BurstString_NumberFormatKind;
}
namespace Unity::Burst {
class BurstString_PreserveAttribute;
}
namespace Unity::Burst {
struct BurstString_PrintFloatFormat;
}
namespace Unity::Burst {
struct BurstString_tBigInt;
}
namespace Unity::Burst {
struct BurstString_tFloatUnion32;
}
namespace Unity::Burst {
struct BurstString_tFloatUnion64;
}
namespace Unity::Burst {
struct tBigInt_BurstString__m_blocks_e__FixedBuffer;
}
// Forward declare root types
namespace Unity::Burst {
struct BurstString_CutoffMode;
}
namespace Unity::Burst {
struct BurstString_NumberBufferKind;
}
namespace Unity::Burst {
struct BurstString_NumberFormatKind;
}
namespace Unity::Burst {
struct BurstString_PrintFloatFormat;
}
namespace Unity::Burst {
class BurstString;
}
namespace Unity::Burst {
class BurstString_PreserveAttribute;
}
namespace Unity::Burst {
struct BurstString_FormatOptions;
}
namespace Unity::Burst {
struct BurstString_NumberBuffer;
}
namespace Unity::Burst {
struct BurstString_tBigInt;
}
namespace Unity::Burst {
struct BurstString_tFloatUnion32;
}
namespace Unity::Burst {
struct BurstString_tFloatUnion64;
}
namespace Unity::Burst {
struct tBigInt_BurstString__m_blocks_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::BurstString_CutoffMode);
MARK_VAL_T(::Unity::Burst::BurstString_NumberBufferKind);
MARK_VAL_T(::Unity::Burst::BurstString_NumberFormatKind);
MARK_VAL_T(::Unity::Burst::BurstString_PrintFloatFormat);
MARK_REF_PTR_T(::Unity::Burst::BurstString);
MARK_REF_PTR_T(::Unity::Burst::BurstString_PreserveAttribute);
MARK_VAL_T(::Unity::Burst::BurstString_FormatOptions);
MARK_VAL_T(::Unity::Burst::BurstString_NumberBuffer);
MARK_VAL_T(::Unity::Burst::BurstString_tBigInt);
MARK_VAL_T(::Unity::Burst::BurstString_tFloatUnion32);
MARK_VAL_T(::Unity::Burst::BurstString_tFloatUnion64);
MARK_VAL_T(::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer);
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstString/PreserveAttribute
class CORDL_TYPE BurstString_PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::BurstString_PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x450b584, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstString_PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstString_PreserveAttribute(BurstString_PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstString_PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstString_PreserveAttribute(BurstString_PreserveAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberBufferKind
struct CORDL_TYPE BurstString_NumberBufferKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BurstString_NumberBufferKind_Unwrapped
  enum struct __BurstString_NumberBufferKind_Unwrapped : int32_t {
    __E_Integer = static_cast<int32_t>(0x0),
    __E_Float = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstString_NumberBufferKind_Unwrapped() const noexcept {
    return static_cast<__BurstString_NumberBufferKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_NumberBufferKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BurstString_NumberBufferKind(int32_t value__) noexcept;

  /// @brief Field Float value: I32(1)
  static ::Unity::Burst::BurstString_NumberBufferKind const Float;

  /// @brief Field Integer value: I32(0)
  static ::Unity::Burst::BurstString_NumberBufferKind const Integer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_NumberBufferKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_NumberBufferKind, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies Unity.Burst.BurstString::NumberBufferKind
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberBuffer
struct CORDL_TYPE BurstString_NumberBuffer {
public:
  // Declarations
  /// @brief Method GetDigitsPointer, addr 0x450b58c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> GetDigitsPointer();

  /// @brief Method .ctor, addr 0x4508858, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::BurstString_NumberBufferKind kind, ::cordl_internals::Ptr<uint8_t> buffer, int32_t digitsCount, int32_t scale, bool isNegative);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_NumberBuffer();

  // Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Kind", ty: "::Unity::Burst::BurstString_NumberBufferKind",
  // modifiers: "", def_value: None }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None }]
  constexpr BurstString_NumberBuffer(::cordl_internals::Ptr<uint8_t> _buffer, ::Unity::Burst::BurstString_NumberBufferKind Kind, int32_t DigitsCount, int32_t Scale, bool IsNegative) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14621 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> _buffer;

  /// @brief Field Kind, offset: 0x8, size: 0x4, def value: None
  ::Unity::Burst::BurstString_NumberBufferKind Kind;

  /// @brief Field DigitsCount, offset: 0xc, size: 0x4, def value: None
  int32_t DigitsCount;

  /// @brief Field Scale, offset: 0x10, size: 0x4, def value: None
  int32_t Scale;

  /// @brief Field IsNegative, offset: 0x14, size: 0x1, def value: None
  bool IsNegative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_NumberBuffer, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_NumberBuffer, Kind) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_NumberBuffer, DigitsCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_NumberBuffer, Scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_NumberBuffer, IsNegative) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_NumberBuffer, 0x18>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/NumberFormatKind
struct CORDL_TYPE BurstString_NumberFormatKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __BurstString_NumberFormatKind_Unwrapped
  enum struct __BurstString_NumberFormatKind_Unwrapped : uint8_t {
    __E_General = static_cast<uint8_t>(0x0u),
    __E_Decimal = static_cast<uint8_t>(0x1u),
    __E_DecimalForceSigned = static_cast<uint8_t>(0x2u),
    __E_Hexadecimal = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstString_NumberFormatKind_Unwrapped() const noexcept {
    return static_cast<__BurstString_NumberFormatKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_NumberFormatKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr BurstString_NumberFormatKind(uint8_t value__) noexcept;

  /// @brief Field Decimal value: U8(1)
  static ::Unity::Burst::BurstString_NumberFormatKind const Decimal;

  /// @brief Field DecimalForceSigned value: U8(2)
  static ::Unity::Burst::BurstString_NumberFormatKind const DecimalForceSigned;

  /// @brief Field General value: U8(0)
  static ::Unity::Burst::BurstString_NumberFormatKind const General;

  /// @brief Field Hexadecimal value: U8(3)
  static ::Unity::Burst::BurstString_NumberFormatKind const Hexadecimal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_NumberFormatKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_NumberFormatKind, 0x1>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies Unity.Burst.BurstString::NumberFormatKind
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/FormatOptions
struct CORDL_TYPE BurstString_FormatOptions {
public:
  // Declarations
  __declspec(property(get = get_Uppercase)) bool Uppercase;

  /// @brief Method EncodeToRaw, addr 0x450b594, size 0x8, virtual false, abstract: false, final false
  inline int32_t EncodeToRaw();

  /// @brief Method GetBase, addr 0x45087ec, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetBase();

  /// @brief Method ToString, addr 0x450b59c, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x450954c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::BurstString_NumberFormatKind kind, int8_t alignAndSize, uint8_t specifier, bool lowercase);

  /// @brief Method get_Uppercase, addr 0x4508804, size 0x10, virtual false, abstract: false, final false
  inline bool get_Uppercase();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_FormatOptions();

  // Ctor Parameters [CppParam { name: "Kind", ty: "::Unity::Burst::BurstString_NumberFormatKind", modifiers: "", def_value: None }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: None }]
  constexpr BurstString_FormatOptions(::Unity::Burst::BurstString_NumberFormatKind Kind, int8_t AlignAndSize, uint8_t Specifier, bool Lowercase) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14623 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Kind, offset: 0x0, size: 0x1, def value: None
  ::Unity::Burst::BurstString_NumberFormatKind Kind;

  /// @brief Field AlignAndSize, offset: 0x1, size: 0x1, def value: None
  int8_t AlignAndSize;

  /// @brief Field Specifier, offset: 0x2, size: 0x1, def value: None
  uint8_t Specifier;

  /// @brief Field Lowercase, offset: 0x3, size: 0x1, def value: None
  bool Lowercase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_FormatOptions, Kind) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_FormatOptions, AlignAndSize) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_FormatOptions, Specifier) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_FormatOptions, Lowercase) == 0x3, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_FormatOptions, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE tBigInt_BurstString__m_blocks_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr tBigInt_BurstString__m_blocks_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr tBigInt_BurstString__m_blocks_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14624 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x8c - 0x4 = 0x88, packed as 0x88
  uint8_t _cordl_size_padding[0x88];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer, 0x8c>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies Unity.Burst.BurstString::tBigInt::<m_blocks>e__FixedBuffer
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tBigInt
struct CORDL_TYPE BurstString_tBigInt {
public:
  // Declarations
  using _m_blocks_e__FixedBuffer = ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer;

  /// @brief Method GetBlock, addr 0x450abc0, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetBlock(int32_t idx);

  /// @brief Method GetLength, addr 0x450b888, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetLength();

  /// @brief Method GetU32, addr 0x450b898, size 0x18, virtual false, abstract: false, final false
  inline uint32_t GetU32();

  /// @brief Method IsZero, addr 0x450abcc, size 0x10, virtual false, abstract: false, final false
  inline bool IsZero();

  /// @brief Method SetU32, addr 0x4509ed8, size 0x1c, virtual false, abstract: false, final false
  inline void SetU32(uint32_t val);

  /// @brief Method SetU64, addr 0x450ab90, size 0x30, virtual false, abstract: false, final false
  inline void SetU64(uint64_t val);

  /// @brief Method SetZero, addr 0x450b890, size 0x8, virtual false, abstract: false, final false
  inline void SetZero();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_tBigInt();

  // Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_blocks", ty: "::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer",
  // modifiers: "", def_value: None }]
  constexpr BurstString_tBigInt(int32_t m_length, ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer m_blocks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14625 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field c_BigInt_MaxBlocks offset 0xffffffff size 0x4
  static constexpr int32_t c_BigInt_MaxBlocks{ static_cast<int32_t>(0x23) };

  /// @brief Field m_length, offset: 0x0, size: 0x4, def value: None
  int32_t m_length;

  /// @brief Field m_blocks, offset: 0x4, size: 0x8c, def value: None
  ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer m_blocks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_tBigInt, m_length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstString_tBigInt, m_blocks) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_tBigInt, 0x90>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/CutoffMode
struct CORDL_TYPE BurstString_CutoffMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BurstString_CutoffMode_Unwrapped
  enum struct __BurstString_CutoffMode_Unwrapped : int32_t {
    __E_Unique = static_cast<int32_t>(0x0),
    __E_TotalLength = static_cast<int32_t>(0x1),
    __E_FractionLength = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstString_CutoffMode_Unwrapped() const noexcept {
    return static_cast<__BurstString_CutoffMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_CutoffMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BurstString_CutoffMode(int32_t value__) noexcept;

  /// @brief Field FractionLength value: I32(2)
  static ::Unity::Burst::BurstString_CutoffMode const FractionLength;

  /// @brief Field TotalLength value: I32(1)
  static ::Unity::Burst::BurstString_CutoffMode const TotalLength;

  /// @brief Field Unique value: I32(0)
  static ::Unity::Burst::BurstString_CutoffMode const Unique;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_CutoffMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_CutoffMode, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/PrintFloatFormat
struct CORDL_TYPE BurstString_PrintFloatFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BurstString_PrintFloatFormat_Unwrapped
  enum struct __BurstString_PrintFloatFormat_Unwrapped : int32_t {
    __E_Positional = static_cast<int32_t>(0x0),
    __E_Scientific = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BurstString_PrintFloatFormat_Unwrapped() const noexcept {
    return static_cast<__BurstString_PrintFloatFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_PrintFloatFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BurstString_PrintFloatFormat(int32_t value__) noexcept;

  /// @brief Field Positional value: I32(0)
  static ::Unity::Burst::BurstString_PrintFloatFormat const Positional;

  /// @brief Field Scientific value: I32(1)
  static ::Unity::Burst::BurstString_PrintFloatFormat const Scientific;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstString_PrintFloatFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_PrintFloatFormat, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tFloatUnion32
struct CORDL_TYPE BurstString_tFloatUnion32 {
public:
  // Declarations
  /// @brief Field m_floatingPoint, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_floatingPoint, put = __cordl_internal_set_m_floatingPoint)) float_t m_floatingPoint;

  /// @brief Field m_integer, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_integer, put = __cordl_internal_set_m_integer)) uint32_t m_integer;

  /// @brief Method GetExponent, addr 0x450b390, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetExponent();

  /// @brief Method GetMantissa, addr 0x450b39c, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetMantissa();

  /// @brief Method IsNegative, addr 0x450b3a8, size 0xc, virtual false, abstract: false, final false
  inline bool IsNegative();

  constexpr float_t const& __cordl_internal_get_m_floatingPoint() const;

  constexpr float_t& __cordl_internal_get_m_floatingPoint();

  constexpr uint32_t const& __cordl_internal_get_m_integer() const;

  constexpr uint32_t& __cordl_internal_get_m_integer();

  constexpr void __cordl_internal_set_m_floatingPoint(float_t value);

  constexpr void __cordl_internal_set_m_integer(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_tFloatUnion32();

  // Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BurstString_tFloatUnion32(float_t m_floatingPoint, uint32_t m_integer) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_floatingPoint_padding[0x0];
      /// @brief Field m_floatingPoint, offset: 0x0, size: 0x4, def value: None
      float_t ___m_floatingPoint;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_floatingPoint_padding_forAlignment[0x0];
      /// @brief Field m_floatingPoint, offset: 0x0, size: 0x4, def value: None
      float_t ___m_floatingPoint_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_integer_padding[0x0];
      /// @brief Field m_integer, offset: 0x0, size: 0x4, def value: None
      uint32_t ___m_integer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_integer_padding_forAlignment[0x0];
      /// @brief Field m_integer, offset: 0x0, size: 0x4, def value: None
      uint32_t ___m_integer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_tFloatUnion32, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstString/tFloatUnion64
struct CORDL_TYPE BurstString_tFloatUnion64 {
public:
  // Declarations
  /// @brief Field m_floatingPoint, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_floatingPoint, put = __cordl_internal_set_m_floatingPoint)) double_t m_floatingPoint;

  /// @brief Field m_integer, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_integer, put = __cordl_internal_set_m_integer)) uint64_t m_integer;

  /// @brief Method GetExponent, addr 0x450b3b4, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetExponent();

  /// @brief Method GetMantissa, addr 0x450b3c0, size 0xc, virtual false, abstract: false, final false
  inline uint64_t GetMantissa();

  /// @brief Method IsNegative, addr 0x450b3cc, size 0xc, virtual false, abstract: false, final false
  inline bool IsNegative();

  constexpr double_t const& __cordl_internal_get_m_floatingPoint() const;

  constexpr double_t& __cordl_internal_get_m_floatingPoint();

  constexpr uint64_t const& __cordl_internal_get_m_integer() const;

  constexpr uint64_t& __cordl_internal_get_m_integer();

  constexpr void __cordl_internal_set_m_floatingPoint(double_t value);

  constexpr void __cordl_internal_set_m_integer(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString_tFloatUnion64();

  // Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_integer", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BurstString_tFloatUnion64(double_t m_floatingPoint, uint64_t m_integer) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_floatingPoint_padding[0x0];
      /// @brief Field m_floatingPoint, offset: 0x0, size: 0x8, def value: None
      double_t ___m_floatingPoint;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_floatingPoint_padding_forAlignment[0x0];
      /// @brief Field m_floatingPoint, offset: 0x0, size: 0x8, def value: None
      double_t ___m_floatingPoint_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_integer_padding[0x0];
      /// @brief Field m_integer, offset: 0x0, size: 0x8, def value: None
      uint64_t ___m_integer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_integer_padding_forAlignment[0x0];
      /// @brief Field m_integer, offset: 0x0, size: 0x8, def value: None
      uint64_t ___m_integer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14629 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString_tFloatUnion64, 0x8>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstString
class CORDL_TYPE BurstString : public ::System::Object {
public:
  // Declarations
  using CutoffMode = ::Unity::Burst::BurstString_CutoffMode;

  using FormatOptions = ::Unity::Burst::BurstString_FormatOptions;

  using NumberBuffer = ::Unity::Burst::BurstString_NumberBuffer;

  using NumberBufferKind = ::Unity::Burst::BurstString_NumberBufferKind;

  using NumberFormatKind = ::Unity::Burst::BurstString_NumberFormatKind;

  using PreserveAttribute = ::Unity::Burst::BurstString_PreserveAttribute;

  using PrintFloatFormat = ::Unity::Burst::BurstString_PrintFloatFormat;

  using tBigInt = ::Unity::Burst::BurstString_tBigInt;

  using tFloatUnion32 = ::Unity::Burst::BurstString_tFloatUnion32;

  using tFloatUnion64 = ::Unity::Burst::BurstString_tFloatUnion64;

  /// @brief Field InfinityString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InfinityString, put = setStaticF_InfinityString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> InfinityString;

  /// @brief Field NanString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NanString, put = setStaticF_NanString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> NanString;

  /// @brief Field SplitByColon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SplitByColon, put = setStaticF_SplitByColon)) ::ArrayW<char16_t, ::Array<char16_t>*> SplitByColon;

  /// @brief Field g_PowerOf10_U32, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_g_PowerOf10_U32, put = setStaticF_g_PowerOf10_U32)) ::ArrayW<uint32_t, ::Array<uint32_t>*> g_PowerOf10_U32;

  /// @brief Field logTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_logTable, put = setStaticF_logTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> logTable;

  /// @brief Method AlignLeft, addr 0x45074c8, size 0x4c, virtual false, abstract: false, final false
  static inline bool AlignLeft(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length);

  /// @brief Method AlignRight, addr 0x4507514, size 0xc8, virtual false, abstract: false, final false
  static inline bool AlignRight(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length);

  /// @brief Method BigInt_Add, addr 0x45096fc, size 0x88, virtual false, abstract: false, final false
  static inline void BigInt_Add(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> lhs, ::ByRef<::Unity::Burst::BurstString_tBigInt> rhs);

  /// @brief Method BigInt_Add_internal, addr 0x4509784, size 0xa8, virtual false, abstract: false, final false
  static inline void BigInt_Add_internal(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> pLarge,
                                         ::ByRef<::Unity::Burst::BurstString_tBigInt> pSmall);

  /// @brief Method BigInt_Compare, addr 0x45096ac, size 0x50, virtual false, abstract: false, final false
  static inline int32_t BigInt_Compare(::ByRef<::Unity::Burst::BurstString_tBigInt> lhs, ::ByRef<::Unity::Burst::BurstString_tBigInt> rhs);

  /// @brief Method BigInt_DivideWithRemainder_MaxQuotient9, addr 0x450a0dc, size 0x1c8, virtual false, abstract: false, final false
  static inline uint32_t BigInt_DivideWithRemainder_MaxQuotient9(::ByRef<::Unity::Burst::BurstString_tBigInt> pDividend, ::ByRef<::Unity::Burst::BurstString_tBigInt> divisor);

  /// @brief Method BigInt_Multiply, addr 0x450982c, size 0x88, virtual false, abstract: false, final false
  static inline void BigInt_Multiply(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> lhs, ::ByRef<::Unity::Burst::BurstString_tBigInt> rhs);

  /// @brief Method BigInt_Multiply, addr 0x45099a8, size 0x60, virtual false, abstract: false, final false
  static inline void BigInt_Multiply(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> lhs, uint32_t rhs);

  /// @brief Method BigInt_Multiply10, addr 0x4509ac0, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Multiply10(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult);

  /// @brief Method BigInt_Multiply2, addr 0x4509a64, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Multiply2(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult);

  /// @brief Method BigInt_Multiply2, addr 0x4509a08, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Multiply2(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> input);

  /// @brief Method BigInt_MultiplyPow10, addr 0x4509ef4, size 0x18c, virtual false, abstract: false, final false
  static inline void BigInt_MultiplyPow10(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> input, uint32_t exponent);

  /// @brief Method BigInt_Multiply_internal, addr 0x45098b4, size 0xf4, virtual false, abstract: false, final false
  static inline void BigInt_Multiply_internal(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, ::ByRef<::Unity::Burst::BurstString_tBigInt> pLarge,
                                              ::ByRef<::Unity::Burst::BurstString_tBigInt> pSmall);

  /// @brief Method BigInt_Pow10, addr 0x4509d64, size 0x174, virtual false, abstract: false, final false
  static inline void BigInt_Pow10(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t exponent);

  /// @brief Method BigInt_Pow2, addr 0x450a080, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Pow2(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t exponent);

  /// @brief Method BigInt_ShiftLeft, addr 0x450a2a4, size 0x114, virtual false, abstract: false, final false
  static inline void BigInt_ShiftLeft(::ByRef<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t shift);

  /// @brief Method ConvertDoubleToString, addr 0x4507974, size 0x27c, virtual false, abstract: false, final false
  static inline void ConvertDoubleToString(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, double_t value,
                                           ::Unity::Burst::BurstString_FormatOptions formatOptions);

  /// @brief Method ConvertFloatToString, addr 0x4507668, size 0x280, virtual false, abstract: false, final false
  static inline void ConvertFloatToString(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, float_t value, ::Unity::Burst::BurstString_FormatOptions formatOptions);

  /// @brief Method ConvertIntegerToString, addr 0x4508424, size 0x1b4, virtual false, abstract: false, final false
  static inline void ConvertIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int64_t value, ::Unity::Burst::BurstString_FormatOptions options);

  /// @brief Method ConvertUnsignedIntegerToString, addr 0x45081c8, size 0x1a4, virtual false, abstract: false, final false
  static inline void ConvertUnsignedIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint64_t value,
                                                    ::Unity::Burst::BurstString_FormatOptions options);

  /// @brief Method CopyFixedString, addr 0x4507374, size 0x24, virtual false, abstract: false, final false
  static inline void CopyFixedString(::cordl_internals::Ptr<uint8_t> dest, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength);

  /// @brief Method Dragon4, addr 0x450a3b8, size 0x7d8, virtual false, abstract: false, final false
  static inline uint32_t Dragon4(uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins, ::Unity::Burst::BurstString_CutoffMode cutoffMode, uint32_t cutoffNumber,
                                 ::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, ::ByRef<int32_t> pOutExponent);

  /// @brief Method Format, addr 0x4507398, size 0x130, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4507bf0, size 0x1d0, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, bool value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4507dc0, size 0x1f8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, char16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x45078e8, size 0x8c, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, double_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x45075dc, size 0x8c, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, float_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x45085d8, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4508690, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int32_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4508748, size 0xa4, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int64_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x450836c, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, int8_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x45080c0, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4508144, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint32_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x450803c, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint64_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x4507fb8, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint8_t value, int32_t formatOptionsRaw);

  /// @brief Method FormatDecimalOrHexadecimal, addr 0x4508b10, size 0xa0, virtual false, abstract: false, final false
  static inline void FormatDecimalOrHexadecimal(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, ::ByRef<::Unity::Burst::BurstString_NumberBuffer> number,
                                                int32_t zeroPadding, bool outputPositiveSign);

  /// @brief Method FormatGeneral, addr 0x4508e30, size 0x1f4, virtual false, abstract: false, final false
  static inline void FormatGeneral(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, ::ByRef<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits,
                                   uint8_t expChar);

  /// @brief Method FormatInfinityNaN, addr 0x450b194, size 0x1fc, virtual false, abstract: false, final false
  static inline void FormatInfinityNaN(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, uint64_t mantissa, bool isNegative,
                                       ::Unity::Burst::BurstString_FormatOptions formatOptions);

  /// @brief Method FormatNumber, addr 0x4508870, size 0x274, virtual false, abstract: false, final false
  static inline void FormatNumber(::cordl_internals::Ptr<uint8_t> dest, ::ByRef<int32_t> destIndex, int32_t destLength, ::ByRef<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits,
                                  ::Unity::Burst::BurstString_FormatOptions options);

  /// @brief Method FormatPositional, addr 0x450abdc, size 0x338, virtual false, abstract: false, final false
  static inline int32_t FormatPositional(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                         int32_t precision);

  /// @brief Method FormatScientific, addr 0x450af14, size 0x280, virtual false, abstract: false, final false
  static inline int32_t FormatScientific(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                         int32_t precision);

  /// @brief Method GetLengthForFormatGeneral, addr 0x4508ce8, size 0x148, virtual false, abstract: false, final false
  static inline int32_t GetLengthForFormatGeneral(::ByRef<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits);

  /// @brief Method GetLengthIntegerToString, addr 0x4508ae4, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t GetLengthIntegerToString(int64_t value, int32_t basis, int32_t zeroPadding);

  /// @brief Method LogBase2, addr 0x4509588, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t LogBase2(uint32_t val);

  /// @brief Method OptsSplit, addr 0x4509024, size 0x170, virtual false, abstract: false, final false
  static inline void OptsSplit(::StringW fullFormat, ::ByRef<::StringW> padding, ::ByRef<::StringW> format);

  /// @brief Method ParseFormatToFormatOptions, addr 0x4509194, size 0x3b8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstString_FormatOptions ParseFormatToFormatOptions(::StringW fullFormat);

  /// @brief Method RoundNumber, addr 0x4508bb0, size 0x138, virtual false, abstract: false, final false
  static inline void RoundNumber(::ByRef<::Unity::Burst::BurstString_NumberBuffer> number, int32_t pos, bool isCorrectlyRounded);

  /// @brief Method ShouldRoundUp, addr 0x4509564, size 0x24, virtual false, abstract: false, final false
  static inline bool ShouldRoundUp(::cordl_internals::Ptr<uint8_t> dig, int32_t i, bool isCorrectlyRounded);

  /// @brief Method ValueToIntegerChar, addr 0x4508814, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t ValueToIntegerChar(int32_t value, bool uppercase);

  /// @brief Method g_PowerOf10_Big, addr 0x4509b1c, size 0x248, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstString_tBigInt g_PowerOf10_Big(int32_t i);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_InfinityString();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_NanString();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_SplitByColon();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_g_PowerOf10_U32();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_logTable();

  static inline void setStaticF_InfinityString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_NanString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SplitByColon(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_g_PowerOf10_U32(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_logTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstString(BurstString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstString(BurstString const&) = delete;

  /// @brief Field DoubleNumberBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t DoubleNumberBufferLength{ static_cast<int32_t>(0x12) };

  /// @brief Field DoublePrecision offset 0xffffffff size 0x4
  static constexpr int32_t DoublePrecision{ static_cast<int32_t>(0x11) };

  /// @brief Field DoublePrecisionCustomFormat offset 0xffffffff size 0x4
  static constexpr int32_t DoublePrecisionCustomFormat{ static_cast<int32_t>(0xf) };

  /// @brief Field SingleNumberBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t SingleNumberBufferLength{ static_cast<int32_t>(0xa) };

  /// @brief Field SinglePrecision offset 0xffffffff size 0x4
  static constexpr int32_t SinglePrecision{ static_cast<int32_t>(0x9) };

  /// @brief Field SinglePrecisionCustomFormat offset 0xffffffff size 0x4
  static constexpr int32_t SinglePrecisionCustomFormat{ static_cast<int32_t>(0x7) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_CutoffMode, "Unity.Burst", "BurstString/CutoffMode");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_NumberBufferKind, "Unity.Burst", "BurstString/NumberBufferKind");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_NumberFormatKind, "Unity.Burst", "BurstString/NumberFormatKind");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_PrintFloatFormat, "Unity.Burst", "BurstString/PrintFloatFormat");
NEED_NO_BOX(::Unity::Burst::BurstString);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString*, "Unity.Burst", "BurstString");
NEED_NO_BOX(::Unity::Burst::BurstString_PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_PreserveAttribute*, "Unity.Burst", "BurstString/PreserveAttribute");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_FormatOptions, "Unity.Burst", "BurstString/FormatOptions");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_NumberBuffer, "Unity.Burst", "BurstString/NumberBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_tBigInt, "Unity.Burst", "BurstString/tBigInt");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_tFloatUnion32, "Unity.Burst", "BurstString/tFloatUnion32");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString_tFloatUnion64, "Unity.Burst", "BurstString/tFloatUnion64");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer, "Unity.Burst", "BurstString/tBigInt/<m_blocks>e__FixedBuffer");
