#pragma once
// IWYU pragma private; include "System/TermInfoNumbers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TermInfoNumbers)
// Forward declare root types
namespace System {
struct TermInfoNumbers;
}
// Write type traits
MARK_VAL_T(::System::TermInfoNumbers);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.TermInfoNumbers
struct CORDL_TYPE TermInfoNumbers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TermInfoNumbers_Unwrapped
  enum struct __TermInfoNumbers_Unwrapped : int32_t {
    __E_Columns = static_cast<int32_t>(0x0),
    __E_InitTabs = static_cast<int32_t>(0x1),
    __E_Lines = static_cast<int32_t>(0x2),
    __E_LinesOfMemory = static_cast<int32_t>(0x3),
    __E_MagicCookieGlitch = static_cast<int32_t>(0x4),
    __E_PaddingBaudRate = static_cast<int32_t>(0x5),
    __E_VirtualTerminal = static_cast<int32_t>(0x6),
    __E_WidthStatusLine = static_cast<int32_t>(0x7),
    __E_NumLabels = static_cast<int32_t>(0x8),
    __E_LabelHeight = static_cast<int32_t>(0x9),
    __E_LabelWidth = static_cast<int32_t>(0xa),
    __E_MaxAttributes = static_cast<int32_t>(0xb),
    __E_MaximumWindows = static_cast<int32_t>(0xc),
    __E_MaxColors = static_cast<int32_t>(0xd),
    __E_MaxPairs = static_cast<int32_t>(0xe),
    __E_NoColorVideo = static_cast<int32_t>(0xf),
    __E_BufferCapacity = static_cast<int32_t>(0x10),
    __E_DotVertSpacing = static_cast<int32_t>(0x11),
    __E_DotHorzSpacing = static_cast<int32_t>(0x12),
    __E_MaxMicroAddress = static_cast<int32_t>(0x13),
    __E_MaxMicroJump = static_cast<int32_t>(0x14),
    __E_MicroColSize = static_cast<int32_t>(0x15),
    __E_MicroLineSize = static_cast<int32_t>(0x16),
    __E_NumberOfPins = static_cast<int32_t>(0x17),
    __E_OutputResChar = static_cast<int32_t>(0x18),
    __E_OutputResLine = static_cast<int32_t>(0x19),
    __E_OutputResHorzInch = static_cast<int32_t>(0x1a),
    __E_OutputResVertInch = static_cast<int32_t>(0x1b),
    __E_PrintRate = static_cast<int32_t>(0x1c),
    __E_WideCharSize = static_cast<int32_t>(0x1d),
    __E_Buttons = static_cast<int32_t>(0x1e),
    __E_BitImageEntwining = static_cast<int32_t>(0x1f),
    __E_BitImageType = static_cast<int32_t>(0x20),
    __E_Last = static_cast<int32_t>(0x21),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TermInfoNumbers_Unwrapped() const noexcept {
    return static_cast<__TermInfoNumbers_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoNumbers();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TermInfoNumbers(int32_t value__) noexcept;

  /// @brief Field BitImageEntwining value: I32(31)
  static ::System::TermInfoNumbers const BitImageEntwining;

  /// @brief Field BitImageType value: I32(32)
  static ::System::TermInfoNumbers const BitImageType;

  /// @brief Field BufferCapacity value: I32(16)
  static ::System::TermInfoNumbers const BufferCapacity;

  /// @brief Field Buttons value: I32(30)
  static ::System::TermInfoNumbers const Buttons;

  /// @brief Field Columns value: I32(0)
  static ::System::TermInfoNumbers const Columns;

  /// @brief Field DotHorzSpacing value: I32(18)
  static ::System::TermInfoNumbers const DotHorzSpacing;

  /// @brief Field DotVertSpacing value: I32(17)
  static ::System::TermInfoNumbers const DotVertSpacing;

  /// @brief Field InitTabs value: I32(1)
  static ::System::TermInfoNumbers const InitTabs;

  /// @brief Field LabelHeight value: I32(9)
  static ::System::TermInfoNumbers const LabelHeight;

  /// @brief Field LabelWidth value: I32(10)
  static ::System::TermInfoNumbers const LabelWidth;

  /// @brief Field Last value: I32(33)
  static ::System::TermInfoNumbers const Last;

  /// @brief Field Lines value: I32(2)
  static ::System::TermInfoNumbers const Lines;

  /// @brief Field LinesOfMemory value: I32(3)
  static ::System::TermInfoNumbers const LinesOfMemory;

  /// @brief Field MagicCookieGlitch value: I32(4)
  static ::System::TermInfoNumbers const MagicCookieGlitch;

  /// @brief Field MaxAttributes value: I32(11)
  static ::System::TermInfoNumbers const MaxAttributes;

  /// @brief Field MaxColors value: I32(13)
  static ::System::TermInfoNumbers const MaxColors;

  /// @brief Field MaxMicroAddress value: I32(19)
  static ::System::TermInfoNumbers const MaxMicroAddress;

  /// @brief Field MaxMicroJump value: I32(20)
  static ::System::TermInfoNumbers const MaxMicroJump;

  /// @brief Field MaxPairs value: I32(14)
  static ::System::TermInfoNumbers const MaxPairs;

  /// @brief Field MaximumWindows value: I32(12)
  static ::System::TermInfoNumbers const MaximumWindows;

  /// @brief Field MicroColSize value: I32(21)
  static ::System::TermInfoNumbers const MicroColSize;

  /// @brief Field MicroLineSize value: I32(22)
  static ::System::TermInfoNumbers const MicroLineSize;

  /// @brief Field NoColorVideo value: I32(15)
  static ::System::TermInfoNumbers const NoColorVideo;

  /// @brief Field NumLabels value: I32(8)
  static ::System::TermInfoNumbers const NumLabels;

  /// @brief Field NumberOfPins value: I32(23)
  static ::System::TermInfoNumbers const NumberOfPins;

  /// @brief Field OutputResChar value: I32(24)
  static ::System::TermInfoNumbers const OutputResChar;

  /// @brief Field OutputResHorzInch value: I32(26)
  static ::System::TermInfoNumbers const OutputResHorzInch;

  /// @brief Field OutputResLine value: I32(25)
  static ::System::TermInfoNumbers const OutputResLine;

  /// @brief Field OutputResVertInch value: I32(27)
  static ::System::TermInfoNumbers const OutputResVertInch;

  /// @brief Field PaddingBaudRate value: I32(5)
  static ::System::TermInfoNumbers const PaddingBaudRate;

  /// @brief Field PrintRate value: I32(28)
  static ::System::TermInfoNumbers const PrintRate;

  /// @brief Field VirtualTerminal value: I32(6)
  static ::System::TermInfoNumbers const VirtualTerminal;

  /// @brief Field WideCharSize value: I32(29)
  static ::System::TermInfoNumbers const WideCharSize;

  /// @brief Field WidthStatusLine value: I32(7)
  static ::System::TermInfoNumbers const WidthStatusLine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TermInfoNumbers, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TermInfoNumbers, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoNumbers, "System", "TermInfoNumbers");
