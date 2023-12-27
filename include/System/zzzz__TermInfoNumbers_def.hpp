#pragma once
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
// Type: System::TermInfoNumbers
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2624))
// CS Name: ::System::TermInfoNumbers
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TermInfoNumbers(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoNumbers();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Columns value: static_cast<int32_t>(0x0)
  static ::System::TermInfoNumbers const Columns;

  /// @brief Field InitTabs value: static_cast<int32_t>(0x1)
  static ::System::TermInfoNumbers const InitTabs;

  /// @brief Field Lines value: static_cast<int32_t>(0x2)
  static ::System::TermInfoNumbers const Lines;

  /// @brief Field LinesOfMemory value: static_cast<int32_t>(0x3)
  static ::System::TermInfoNumbers const LinesOfMemory;

  /// @brief Field MagicCookieGlitch value: static_cast<int32_t>(0x4)
  static ::System::TermInfoNumbers const MagicCookieGlitch;

  /// @brief Field PaddingBaudRate value: static_cast<int32_t>(0x5)
  static ::System::TermInfoNumbers const PaddingBaudRate;

  /// @brief Field VirtualTerminal value: static_cast<int32_t>(0x6)
  static ::System::TermInfoNumbers const VirtualTerminal;

  /// @brief Field WidthStatusLine value: static_cast<int32_t>(0x7)
  static ::System::TermInfoNumbers const WidthStatusLine;

  /// @brief Field NumLabels value: static_cast<int32_t>(0x8)
  static ::System::TermInfoNumbers const NumLabels;

  /// @brief Field LabelHeight value: static_cast<int32_t>(0x9)
  static ::System::TermInfoNumbers const LabelHeight;

  /// @brief Field LabelWidth value: static_cast<int32_t>(0xa)
  static ::System::TermInfoNumbers const LabelWidth;

  /// @brief Field MaxAttributes value: static_cast<int32_t>(0xb)
  static ::System::TermInfoNumbers const MaxAttributes;

  /// @brief Field MaximumWindows value: static_cast<int32_t>(0xc)
  static ::System::TermInfoNumbers const MaximumWindows;

  /// @brief Field MaxColors value: static_cast<int32_t>(0xd)
  static ::System::TermInfoNumbers const MaxColors;

  /// @brief Field MaxPairs value: static_cast<int32_t>(0xe)
  static ::System::TermInfoNumbers const MaxPairs;

  /// @brief Field NoColorVideo value: static_cast<int32_t>(0xf)
  static ::System::TermInfoNumbers const NoColorVideo;

  /// @brief Field BufferCapacity value: static_cast<int32_t>(0x10)
  static ::System::TermInfoNumbers const BufferCapacity;

  /// @brief Field DotVertSpacing value: static_cast<int32_t>(0x11)
  static ::System::TermInfoNumbers const DotVertSpacing;

  /// @brief Field DotHorzSpacing value: static_cast<int32_t>(0x12)
  static ::System::TermInfoNumbers const DotHorzSpacing;

  /// @brief Field MaxMicroAddress value: static_cast<int32_t>(0x13)
  static ::System::TermInfoNumbers const MaxMicroAddress;

  /// @brief Field MaxMicroJump value: static_cast<int32_t>(0x14)
  static ::System::TermInfoNumbers const MaxMicroJump;

  /// @brief Field MicroColSize value: static_cast<int32_t>(0x15)
  static ::System::TermInfoNumbers const MicroColSize;

  /// @brief Field MicroLineSize value: static_cast<int32_t>(0x16)
  static ::System::TermInfoNumbers const MicroLineSize;

  /// @brief Field NumberOfPins value: static_cast<int32_t>(0x17)
  static ::System::TermInfoNumbers const NumberOfPins;

  /// @brief Field OutputResChar value: static_cast<int32_t>(0x18)
  static ::System::TermInfoNumbers const OutputResChar;

  /// @brief Field OutputResLine value: static_cast<int32_t>(0x19)
  static ::System::TermInfoNumbers const OutputResLine;

  /// @brief Field OutputResHorzInch value: static_cast<int32_t>(0x1a)
  static ::System::TermInfoNumbers const OutputResHorzInch;

  /// @brief Field OutputResVertInch value: static_cast<int32_t>(0x1b)
  static ::System::TermInfoNumbers const OutputResVertInch;

  /// @brief Field PrintRate value: static_cast<int32_t>(0x1c)
  static ::System::TermInfoNumbers const PrintRate;

  /// @brief Field WideCharSize value: static_cast<int32_t>(0x1d)
  static ::System::TermInfoNumbers const WideCharSize;

  /// @brief Field Buttons value: static_cast<int32_t>(0x1e)
  static ::System::TermInfoNumbers const Buttons;

  /// @brief Field BitImageEntwining value: static_cast<int32_t>(0x1f)
  static ::System::TermInfoNumbers const BitImageEntwining;

  /// @brief Field BitImageType value: static_cast<int32_t>(0x20)
  static ::System::TermInfoNumbers const BitImageType;

  /// @brief Field Last value: static_cast<int32_t>(0x21)
  static ::System::TermInfoNumbers const Last;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TermInfoNumbers, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoNumbers, "System", "TermInfoNumbers");
