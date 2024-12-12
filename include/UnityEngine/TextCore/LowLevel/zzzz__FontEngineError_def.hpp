#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontEngineError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontEngineError)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontEngineError);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.FontEngineError
struct CORDL_TYPE FontEngineError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FontEngineError_Unwrapped
  enum struct __FontEngineError_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Invalid_File_Path = static_cast<int32_t>(0x1),
    __E_Invalid_File_Format = static_cast<int32_t>(0x2),
    __E_Invalid_File_Structure = static_cast<int32_t>(0x3),
    __E_Invalid_File = static_cast<int32_t>(0x4),
    __E_Invalid_Table = static_cast<int32_t>(0x8),
    __E_Invalid_Glyph_Index = static_cast<int32_t>(0x10),
    __E_Invalid_Character_Code = static_cast<int32_t>(0x11),
    __E_Invalid_Pixel_Size = static_cast<int32_t>(0x17),
    __E_Invalid_Library = static_cast<int32_t>(0x21),
    __E_Invalid_Face = static_cast<int32_t>(0x23),
    __E_Invalid_Library_or_Face = static_cast<int32_t>(0x29),
    __E_Atlas_Generation_Cancelled = static_cast<int32_t>(0x64),
    __E_Invalid_SharedTextureData = static_cast<int32_t>(0x65),
    __E_OpenTypeLayoutLookup_Mismatch = static_cast<int32_t>(0x74),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FontEngineError_Unwrapped() const noexcept {
    return static_cast<__FontEngineError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontEngineError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FontEngineError(int32_t value__) noexcept;

  /// @brief Field Atlas_Generation_Cancelled value: I32(100)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Atlas_Generation_Cancelled;

  /// @brief Field Invalid_Character_Code value: I32(17)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Character_Code;

  /// @brief Field Invalid_Face value: I32(35)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Face;

  /// @brief Field Invalid_File value: I32(4)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File;

  /// @brief Field Invalid_File_Format value: I32(2)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Format;

  /// @brief Field Invalid_File_Path value: I32(1)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Path;

  /// @brief Field Invalid_File_Structure value: I32(3)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_File_Structure;

  /// @brief Field Invalid_Glyph_Index value: I32(16)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Glyph_Index;

  /// @brief Field Invalid_Library value: I32(33)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Library;

  /// @brief Field Invalid_Library_or_Face value: I32(41)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Library_or_Face;

  /// @brief Field Invalid_Pixel_Size value: I32(23)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Pixel_Size;

  /// @brief Field Invalid_SharedTextureData value: I32(101)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_SharedTextureData;

  /// @brief Field Invalid_Table value: I32(8)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Invalid_Table;

  /// @brief Field OpenTypeLayoutLookup_Mismatch value: I32(116)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const OpenTypeLayoutLookup_Mismatch;

  /// @brief Field Success value: I32(0)
  static ::UnityEngine::TextCore::LowLevel::FontEngineError const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontEngineError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontEngineError, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontEngineError, "UnityEngine.TextCore.LowLevel", "FontEngineError");
