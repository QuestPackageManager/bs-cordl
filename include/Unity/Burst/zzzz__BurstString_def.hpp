#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString)
namespace GlobalNamespace {
struct __BurstString__tBigInt___m_blocks_e__FixedBuffer;
}
namespace Unity::Burst {
struct __BurstString__CutoffMode;
}
namespace Unity::Burst {
struct __BurstString__FormatOptions;
}
namespace Unity::Burst {
struct __BurstString__NumberBufferKind;
}
namespace Unity::Burst {
struct __BurstString__NumberBuffer;
}
namespace Unity::Burst {
struct __BurstString__NumberFormatKind;
}
namespace Unity::Burst {
class __BurstString__PreserveAttribute;
}
namespace Unity::Burst {
struct __BurstString__PrintFloatFormat;
}
namespace Unity::Burst {
struct __BurstString__tBigInt;
}
namespace Unity::Burst {
struct __BurstString__tFloatUnion32;
}
namespace Unity::Burst {
struct __BurstString__tFloatUnion64;
}
// Forward declare root types
namespace Unity::Burst {
struct __BurstString__CutoffMode;
}
namespace Unity::Burst {
struct __BurstString__NumberBufferKind;
}
namespace Unity::Burst {
struct __BurstString__NumberFormatKind;
}
namespace Unity::Burst {
struct __BurstString__PrintFloatFormat;
}
namespace Unity::Burst {
class BurstString;
}
namespace Unity::Burst {
class __BurstString__PreserveAttribute;
}
namespace GlobalNamespace {
struct __BurstString__tBigInt___m_blocks_e__FixedBuffer;
}
namespace Unity::Burst {
struct __BurstString__FormatOptions;
}
namespace Unity::Burst {
struct __BurstString__NumberBuffer;
}
namespace Unity::Burst {
struct __BurstString__tBigInt;
}
namespace Unity::Burst {
struct __BurstString__tFloatUnion32;
}
namespace Unity::Burst {
struct __BurstString__tFloatUnion64;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::__BurstString__CutoffMode);
MARK_VAL_T(::Unity::Burst::__BurstString__NumberBufferKind);
MARK_VAL_T(::Unity::Burst::__BurstString__NumberFormatKind);
MARK_VAL_T(::Unity::Burst::__BurstString__PrintFloatFormat);
MARK_REF_PTR_T(::Unity::Burst::BurstString);
MARK_REF_PTR_T(::Unity::Burst::__BurstString__PreserveAttribute);
MARK_VAL_T(::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer);
MARK_VAL_T(::Unity::Burst::__BurstString__FormatOptions);
MARK_VAL_T(::Unity::Burst::__BurstString__NumberBuffer);
MARK_VAL_T(::Unity::Burst::__BurstString__tBigInt);
MARK_VAL_T(::Unity::Burst::__BurstString__tFloatUnion32);
MARK_VAL_T(::Unity::Burst::__BurstString__tFloatUnion64);
// Type: ::PreserveAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstString::PreserveAttribute*
class CORDL_TYPE __BurstString__PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::__BurstString__PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x30711dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstString__PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstString__PreserveAttribute(__BurstString__PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstString__PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstString__PreserveAttribute(__BurstString__PreserveAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Type: ::NumberBufferKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::NumberBufferKind
struct CORDL_TYPE __BurstString__NumberBufferKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BurstString__NumberBufferKind_Unwrapped
  enum struct ____BurstString__NumberBufferKind_Unwrapped : int32_t {
    __E_Integer = static_cast<int32_t>(0x0),
    __E_Float = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BurstString__NumberBufferKind_Unwrapped() const noexcept {
    return static_cast<____BurstString__NumberBufferKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__NumberBufferKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BurstString__NumberBufferKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Float value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::__BurstString__NumberBufferKind const Float;

  /// @brief Field Integer value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::__BurstString__NumberBufferKind const Integer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__NumberBufferKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBufferKind, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::NumberBuffer
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::NumberBuffer
struct CORDL_TYPE __BurstString__NumberBuffer {
public:
  // Declarations
  /// @brief Method GetDigitsPointer, addr 0x30711e4, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> GetDigitsPointer();

  /// @brief Method .ctor, addr 0x306e58c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::__BurstString__NumberBufferKind kind, ::cordl_internals::Ptr<uint8_t> buffer, int32_t digitsCount, int32_t scale, bool isNegative);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__NumberBuffer();

  // Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Kind", ty:
  // "::Unity::Burst::__BurstString__NumberBufferKind", modifiers: "", def_value: None }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Scale", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None }]
  constexpr __BurstString__NumberBuffer(::cordl_internals::Ptr<uint8_t> _buffer, ::Unity::Burst::__BurstString__NumberBufferKind Kind, int32_t DigitsCount, int32_t Scale, bool IsNegative) noexcept;

  /// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> _buffer;

  /// @brief Field Kind, offset: 0x8, size: 0x4, def value: None
  ::Unity::Burst::__BurstString__NumberBufferKind Kind;

  /// @brief Field DigitsCount, offset: 0xc, size: 0x4, def value: None
  int32_t DigitsCount;

  /// @brief Field Scale, offset: 0x10, size: 0x4, def value: None
  int32_t Scale;

  /// @brief Field IsNegative, offset: 0x14, size: 0x1, def value: None
  bool IsNegative;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__NumberBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBuffer, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBuffer, Kind) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBuffer, DigitsCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBuffer, Scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberBuffer, IsNegative) == 0x14, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::NumberFormatKind
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::NumberFormatKind
struct CORDL_TYPE __BurstString__NumberFormatKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____BurstString__NumberFormatKind_Unwrapped
  enum struct ____BurstString__NumberFormatKind_Unwrapped : uint8_t {
    __E_General = static_cast<uint8_t>(0x0u),
    __E_Decimal = static_cast<uint8_t>(0x1u),
    __E_DecimalForceSigned = static_cast<uint8_t>(0x2u),
    __E_Hexadecimal = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BurstString__NumberFormatKind_Unwrapped() const noexcept {
    return static_cast<____BurstString__NumberFormatKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__NumberFormatKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __BurstString__NumberFormatKind(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Decimal value: static_cast<uint8_t>(0x1u)
  static ::Unity::Burst::__BurstString__NumberFormatKind const Decimal;

  /// @brief Field DecimalForceSigned value: static_cast<uint8_t>(0x2u)
  static ::Unity::Burst::__BurstString__NumberFormatKind const DecimalForceSigned;

  /// @brief Field General value: static_cast<uint8_t>(0x0u)
  static ::Unity::Burst::__BurstString__NumberFormatKind const General;

  /// @brief Field Hexadecimal value: static_cast<uint8_t>(0x3u)
  static ::Unity::Burst::__BurstString__NumberFormatKind const Hexadecimal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__NumberFormatKind, 0x1>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__NumberFormatKind, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::FormatOptions
// SizeInfo { instance_size: 4, native_size: 8, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::FormatOptions
struct CORDL_TYPE __BurstString__FormatOptions {
public:
  // Declarations
  __declspec(property(get = get_Uppercase)) bool Uppercase;

  /// @brief Method EncodeToRaw, addr 0x30711ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t EncodeToRaw();

  /// @brief Method GetBase, addr 0x306e520, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetBase();

  /// @brief Method ToString, addr 0x30711f4, size 0x2ec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x306f2ec, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Burst::__BurstString__NumberFormatKind kind, int8_t alignAndSize, uint8_t specifier, bool lowercase);

  /// @brief Method get_Uppercase, addr 0x306e538, size 0x10, virtual false, abstract: false, final false
  inline bool get_Uppercase();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__FormatOptions();

  // Ctor Parameters [CppParam { name: "Kind", ty: "::Unity::Burst::__BurstString__NumberFormatKind", modifiers: "", def_value: None }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: None }]
  constexpr __BurstString__FormatOptions(::Unity::Burst::__BurstString__NumberFormatKind Kind, int8_t AlignAndSize, uint8_t Specifier, bool Lowercase) noexcept;

  /// @brief Field Kind, offset: 0x0, size: 0x1, def value: None
  ::Unity::Burst::__BurstString__NumberFormatKind Kind;

  /// @brief Field AlignAndSize, offset: 0x1, size: 0x1, def value: None
  int8_t AlignAndSize;

  /// @brief Field Specifier, offset: 0x2, size: 0x1, def value: None
  uint8_t Specifier;

  /// @brief Field Lowercase, offset: 0x3, size: 0x1, def value: None
  bool Lowercase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__FormatOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__FormatOptions, Kind) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__FormatOptions, AlignAndSize) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__FormatOptions, Specifier) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__FormatOptions, Lowercase) == 0x3, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::<m_blocks>e__FixedBuffer
// SizeInfo { instance_size: 140, native_size: 140, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: Some(0) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BurstString::tBigInt::<m_blocks>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __BurstString__tBigInt___m_blocks_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__tBigInt___m_blocks_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __BurstString__tBigInt___m_blocks_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x8c - 0x4 = 0x88, packed as 0x88
  uint8_t _cordl_size_padding[0x88];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer, 0x8c>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::tBigInt
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 160, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::tBigInt
struct CORDL_TYPE __BurstString__tBigInt {
public:
  // Declarations
  using _m_blocks_e__FixedBuffer = ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer;

  /// @brief Method GetBlock, addr 0x3070918, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetBlock(int32_t idx);

  /// @brief Method GetLength, addr 0x30714e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetLength();

  /// @brief Method GetU32, addr 0x30714f0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t GetU32();

  /// @brief Method IsZero, addr 0x3070924, size 0x10, virtual false, abstract: false, final false
  inline bool IsZero();

  /// @brief Method SetU32, addr 0x306fc0c, size 0x1c, virtual false, abstract: false, final false
  inline void SetU32(uint32_t val);

  /// @brief Method SetU64, addr 0x30708e8, size 0x30, virtual false, abstract: false, final false
  inline void SetU64(uint64_t val);

  /// @brief Method SetZero, addr 0x30714e8, size 0x8, virtual false, abstract: false, final false
  inline void SetZero();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__tBigInt();

  // Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_blocks", ty:
  // "::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr __BurstString__tBigInt(int32_t m_length, ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer m_blocks) noexcept;

  /// @brief Field m_length, offset: 0x0, size: 0x4, def value: None
  int32_t m_length;

  /// @brief Field m_blocks, offset: 0x4, size: 0x8c, def value: None
  ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer m_blocks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field c_BigInt_MaxBlocks offset 0xffffffff size 0x4
  static constexpr int32_t c_BigInt_MaxBlocks{ static_cast<int32_t>(0x23) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__tBigInt, 0x90>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__tBigInt, m_length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__tBigInt, m_blocks) == 0x4, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::CutoffMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::CutoffMode
struct CORDL_TYPE __BurstString__CutoffMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BurstString__CutoffMode_Unwrapped
  enum struct ____BurstString__CutoffMode_Unwrapped : int32_t {
    __E_Unique = static_cast<int32_t>(0x0),
    __E_TotalLength = static_cast<int32_t>(0x1),
    __E_FractionLength = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BurstString__CutoffMode_Unwrapped() const noexcept {
    return static_cast<____BurstString__CutoffMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__CutoffMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BurstString__CutoffMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FractionLength value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::__BurstString__CutoffMode const FractionLength;

  /// @brief Field TotalLength value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::__BurstString__CutoffMode const TotalLength;

  /// @brief Field Unique value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::__BurstString__CutoffMode const Unique;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__CutoffMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__CutoffMode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::PrintFloatFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::PrintFloatFormat
struct CORDL_TYPE __BurstString__PrintFloatFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BurstString__PrintFloatFormat_Unwrapped
  enum struct ____BurstString__PrintFloatFormat_Unwrapped : int32_t {
    __E_Positional = static_cast<int32_t>(0x0),
    __E_Scientific = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BurstString__PrintFloatFormat_Unwrapped() const noexcept {
    return static_cast<____BurstString__PrintFloatFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__PrintFloatFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BurstString__PrintFloatFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Positional value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::__BurstString__PrintFloatFormat const Positional;

  /// @brief Field Scientific value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::__BurstString__PrintFloatFormat const Scientific;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__PrintFloatFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstString__PrintFloatFormat, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::tFloatUnion32
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::tFloatUnion32
struct CORDL_TYPE __BurstString__tFloatUnion32 {
public:
  // Declarations
  /// @brief Field m_floatingPoint, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_floatingPoint, put = __cordl_internal_set_m_floatingPoint)) float_t m_floatingPoint;

  /// @brief Field m_integer, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_integer, put = __cordl_internal_set_m_integer)) uint32_t m_integer;

  /// @brief Method GetExponent, addr 0x3070fe8, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetExponent();

  /// @brief Method GetMantissa, addr 0x3070ff4, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetMantissa();

  /// @brief Method IsNegative, addr 0x3071000, size 0xc, virtual false, abstract: false, final false
  inline bool IsNegative();

  constexpr float_t const& __cordl_internal_get_m_floatingPoint() const;

  constexpr float_t& __cordl_internal_get_m_floatingPoint();

  constexpr uint32_t const& __cordl_internal_get_m_integer() const;

  constexpr uint32_t& __cordl_internal_get_m_integer();

  constexpr void __cordl_internal_set_m_floatingPoint(float_t value);

  constexpr void __cordl_internal_set_m_integer(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__tFloatUnion32();

  // Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __BurstString__tFloatUnion32(float_t m_floatingPoint, uint32_t m_integer) noexcept;

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__tFloatUnion32, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
// Type: ::tFloatUnion64
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::BurstString::tFloatUnion64
struct CORDL_TYPE __BurstString__tFloatUnion64 {
public:
  // Declarations
  /// @brief Field m_floatingPoint, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_floatingPoint, put = __cordl_internal_set_m_floatingPoint)) double_t m_floatingPoint;

  /// @brief Field m_integer, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_integer, put = __cordl_internal_set_m_integer)) uint64_t m_integer;

  /// @brief Method GetExponent, addr 0x307100c, size 0xc, virtual false, abstract: false, final false
  inline uint32_t GetExponent();

  /// @brief Method GetMantissa, addr 0x3071018, size 0xc, virtual false, abstract: false, final false
  inline uint64_t GetMantissa();

  /// @brief Method IsNegative, addr 0x3071024, size 0xc, virtual false, abstract: false, final false
  inline bool IsNegative();

  constexpr double_t const& __cordl_internal_get_m_floatingPoint() const;

  constexpr double_t& __cordl_internal_get_m_floatingPoint();

  constexpr uint64_t const& __cordl_internal_get_m_integer() const;

  constexpr uint64_t& __cordl_internal_get_m_integer();

  constexpr void __cordl_internal_set_m_floatingPoint(double_t value);

  constexpr void __cordl_internal_set_m_integer(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstString__tFloatUnion64();

  // Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_integer", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __BurstString__tFloatUnion64(double_t m_floatingPoint, uint64_t m_integer) noexcept;

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstString__tFloatUnion64, 0x8>, "Size mismatch!");

} // namespace Unity::Burst
// Type: Unity.Burst::BurstString
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::BurstString*
class CORDL_TYPE BurstString : public ::System::Object {
public:
  // Declarations
  using CutoffMode = ::Unity::Burst::__BurstString__CutoffMode;

  using FormatOptions = ::Unity::Burst::__BurstString__FormatOptions;

  using NumberBuffer = ::Unity::Burst::__BurstString__NumberBuffer;

  using NumberBufferKind = ::Unity::Burst::__BurstString__NumberBufferKind;

  using NumberFormatKind = ::Unity::Burst::__BurstString__NumberFormatKind;

  using PreserveAttribute = ::Unity::Burst::__BurstString__PreserveAttribute;

  using PrintFloatFormat = ::Unity::Burst::__BurstString__PrintFloatFormat;

  using tBigInt = ::Unity::Burst::__BurstString__tBigInt;

  using tFloatUnion32 = ::Unity::Burst::__BurstString__tFloatUnion32;

  using tFloatUnion64 = ::Unity::Burst::__BurstString__tFloatUnion64;

  /// @brief Field InfinityString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InfinityString, put = setStaticF_InfinityString))::ArrayW<uint8_t, ::Array<uint8_t>*> InfinityString;

  /// @brief Field NanString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NanString, put = setStaticF_NanString))::ArrayW<uint8_t, ::Array<uint8_t>*> NanString;

  /// @brief Field SplitByColon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SplitByColon, put = setStaticF_SplitByColon))::ArrayW<char16_t, ::Array<char16_t>*> SplitByColon;

  /// @brief Field g_PowerOf10_U32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_g_PowerOf10_U32, put = setStaticF_g_PowerOf10_U32))::ArrayW<uint32_t, ::Array<uint32_t>*> g_PowerOf10_U32;

  /// @brief Field logTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logTable, put = setStaticF_logTable))::ArrayW<uint8_t, ::Array<uint8_t>*> logTable;

  /// @brief Method AlignLeft, addr 0x306d1c0, size 0x4c, virtual false, abstract: false, final false
  static inline bool AlignLeft(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length);

  /// @brief Method AlignRight, addr 0x306d20c, size 0xc8, virtual false, abstract: false, final false
  static inline bool AlignRight(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length);

  /// @brief Method BigInt_Add, addr 0x306f49c, size 0x88, virtual false, abstract: false, final false
  static inline void BigInt_Add(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, ByRef<::Unity::Burst::__BurstString__tBigInt> rhs);

  /// @brief Method BigInt_Add_internal, addr 0x306f524, size 0x84, virtual false, abstract: false, final false
  static inline void BigInt_Add_internal(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> pLarge,
                                         ByRef<::Unity::Burst::__BurstString__tBigInt> pSmall);

  /// @brief Method BigInt_Compare, addr 0x306f44c, size 0x50, virtual false, abstract: false, final false
  static inline int32_t BigInt_Compare(ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, ByRef<::Unity::Burst::__BurstString__tBigInt> rhs);

  /// @brief Method BigInt_DivideWithRemainder_MaxQuotient9, addr 0x306fe10, size 0x1a4, virtual false, abstract: false, final false
  static inline uint32_t BigInt_DivideWithRemainder_MaxQuotient9(ByRef<::Unity::Burst::__BurstString__tBigInt> pDividend, ByRef<::Unity::Burst::__BurstString__tBigInt> divisor);

  /// @brief Method BigInt_Multiply, addr 0x306f5a8, size 0x88, virtual false, abstract: false, final false
  static inline void BigInt_Multiply(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, ByRef<::Unity::Burst::__BurstString__tBigInt> rhs);

  /// @brief Method BigInt_Multiply, addr 0x306f6e0, size 0x60, virtual false, abstract: false, final false
  static inline void BigInt_Multiply(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, uint32_t rhs);

  /// @brief Method BigInt_Multiply10, addr 0x306f7f4, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Multiply10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult);

  /// @brief Method BigInt_Multiply2, addr 0x306f79c, size 0x58, virtual false, abstract: false, final false
  static inline void BigInt_Multiply2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult);

  /// @brief Method BigInt_Multiply2, addr 0x306f740, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Multiply2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> input);

  /// @brief Method BigInt_MultiplyPow10, addr 0x306fc28, size 0x18c, virtual false, abstract: false, final false
  static inline void BigInt_MultiplyPow10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> input, uint32_t exponent);

  /// @brief Method BigInt_Multiply_internal, addr 0x306f630, size 0xb0, virtual false, abstract: false, final false
  static inline void BigInt_Multiply_internal(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> pLarge,
                                              ByRef<::Unity::Burst::__BurstString__tBigInt> pSmall);

  /// @brief Method BigInt_Pow10, addr 0x306fa98, size 0x174, virtual false, abstract: false, final false
  static inline void BigInt_Pow10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t exponent);

  /// @brief Method BigInt_Pow2, addr 0x306fdb4, size 0x5c, virtual false, abstract: false, final false
  static inline void BigInt_Pow2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t exponent);

  /// @brief Method BigInt_ShiftLeft, addr 0x306ffb4, size 0x12c, virtual false, abstract: false, final false
  static inline void BigInt_ShiftLeft(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t shift);

  /// @brief Method ConvertDoubleToString, addr 0x306d680, size 0x28c, virtual false, abstract: false, final false
  static inline void ConvertDoubleToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, double_t value,
                                           ::Unity::Burst::__BurstString__FormatOptions formatOptions);

  /// @brief Method ConvertFloatToString, addr 0x306d360, size 0x294, virtual false, abstract: false, final false
  static inline void ConvertFloatToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, float_t value,
                                          ::Unity::Burst::__BurstString__FormatOptions formatOptions);

  /// @brief Method ConvertIntegerToString, addr 0x306e150, size 0x1bc, virtual false, abstract: false, final false
  static inline void ConvertIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int64_t value, ::Unity::Burst::__BurstString__FormatOptions options);

  /// @brief Method ConvertUnsignedIntegerToString, addr 0x306def8, size 0x1a0, virtual false, abstract: false, final false
  static inline void ConvertUnsignedIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t value,
                                                    ::Unity::Burst::__BurstString__FormatOptions options);

  /// @brief Method CopyFixedString, addr 0x306d06c, size 0x24, virtual false, abstract: false, final false
  static inline void CopyFixedString(::cordl_internals::Ptr<uint8_t> dest, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength);

  /// @brief Method Dragon4, addr 0x30700e0, size 0x808, virtual false, abstract: false, final false
  static inline uint32_t Dragon4(uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins, ::Unity::Burst::__BurstString__CutoffMode cutoffMode, uint32_t cutoffNumber,
                                 ::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, ByRef<int32_t> pOutExponent);

  /// @brief Method Format, addr 0x306d090, size 0x130, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306d90c, size 0x1d0, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, bool value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306dadc, size 0x20c, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, char16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306d5f4, size 0x8c, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, double_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306d2d4, size 0x8c, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, float_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306e30c, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306e3c4, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306e47c, size 0xa4, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int64_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306e098, size 0xb8, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int8_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306ddf0, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint16_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306de74, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint32_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306dd6c, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t value, int32_t formatOptionsRaw);

  /// @brief Method Format, addr 0x306dce8, size 0x84, virtual false, abstract: false, final false
  static inline void Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint8_t value, int32_t formatOptionsRaw);

  /// @brief Method FormatDecimalOrHexadecimal, addr 0x306e83c, size 0xa0, virtual false, abstract: false, final false
  static inline void FormatDecimalOrHexadecimal(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ByRef<::Unity::Burst::__BurstString__NumberBuffer> number,
                                                int32_t zeroPadding, bool outputPositiveSign);

  /// @brief Method FormatGeneral, addr 0x306eb58, size 0x1f4, virtual false, abstract: false, final false
  static inline void FormatGeneral(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t nMaxDigits,
                                   uint8_t expChar);

  /// @brief Method FormatInfinityNaN, addr 0x3070dec, size 0x1fc, virtual false, abstract: false, final false
  static inline void FormatInfinityNaN(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t mantissa, bool isNegative,
                                       ::Unity::Burst::__BurstString__FormatOptions formatOptions);

  /// @brief Method FormatNumber, addr 0x306e5a4, size 0x26c, virtual false, abstract: false, final false
  static inline void FormatNumber(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t nMaxDigits,
                                  ::Unity::Burst::__BurstString__FormatOptions options);

  /// @brief Method FormatPositional, addr 0x3070934, size 0x248, virtual false, abstract: false, final false
  static inline int32_t FormatPositional(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                         int32_t precision);

  /// @brief Method FormatScientific, addr 0x3070b7c, size 0x270, virtual false, abstract: false, final false
  static inline int32_t FormatScientific(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                         int32_t precision);

  /// @brief Method GetLengthForFormatGeneral, addr 0x306ea0c, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t GetLengthForFormatGeneral(ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t nMaxDigits);

  /// @brief Method GetLengthIntegerToString, addr 0x306e810, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t GetLengthIntegerToString(int64_t value, int32_t basis, int32_t zeroPadding);

  /// @brief Method LogBase2, addr 0x306f328, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t LogBase2(uint32_t val);

  /// @brief Method OptsSplit, addr 0x306ed4c, size 0x188, virtual false, abstract: false, final false
  static inline void OptsSplit(::StringW fullFormat, ByRef<::StringW> padding, ByRef<::StringW> format);

  /// @brief Method ParseFormatToFormatOptions, addr 0x306eed4, size 0x418, virtual false, abstract: false, final false
  static inline ::Unity::Burst::__BurstString__FormatOptions ParseFormatToFormatOptions(::StringW fullFormat);

  /// @brief Method RoundNumber, addr 0x306e8dc, size 0x130, virtual false, abstract: false, final false
  static inline void RoundNumber(ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t pos, bool isCorrectlyRounded);

  /// @brief Method ShouldRoundUp, addr 0x306f304, size 0x24, virtual false, abstract: false, final false
  static inline bool ShouldRoundUp(::cordl_internals::Ptr<uint8_t> dig, int32_t i, bool isCorrectlyRounded);

  /// @brief Method ValueToIntegerChar, addr 0x306e548, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t ValueToIntegerChar(int32_t value, bool uppercase);

  /// @brief Method g_PowerOf10_Big, addr 0x306f850, size 0x248, virtual false, abstract: false, final false
  static inline ::Unity::Burst::__BurstString__tBigInt g_PowerOf10_Big(int32_t i);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstString, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__CutoffMode, "Unity.Burst", "BurstString/CutoffMode");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__NumberBufferKind, "Unity.Burst", "BurstString/NumberBufferKind");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__NumberFormatKind, "Unity.Burst", "BurstString/NumberFormatKind");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__PrintFloatFormat, "Unity.Burst", "BurstString/PrintFloatFormat");
NEED_NO_BOX(::Unity::Burst::BurstString);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString*, "Unity.Burst", "BurstString");
NEED_NO_BOX(::Unity::Burst::__BurstString__PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__PreserveAttribute*, "Unity.Burst", "BurstString/PreserveAttribute");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer, "Unity.Burst", "BurstString/tBigInt/<m_blocks>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__FormatOptions, "Unity.Burst", "BurstString/FormatOptions");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__NumberBuffer, "Unity.Burst", "BurstString/NumberBuffer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__tBigInt, "Unity.Burst", "BurstString/tBigInt");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__tFloatUnion32, "Unity.Burst", "BurstString/tFloatUnion32");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstString__tFloatUnion64, "Unity.Burst", "BurstString/tFloatUnion64");
